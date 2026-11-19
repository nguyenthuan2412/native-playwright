<?php
namespace NativePlaywright;

/**
 * Script injected into an isolated world of every frame (invisible to the page).
 * Implements Playwright's selector syntax and actionability checks.
 */
final class Injected
{
    public const WORLD = '__pwlite_util';

    public const SOURCE = <<<'JS'
(() => {
if (globalThis.__pwlite) return true;
const norm = s => (s || '').replace(/[\u200b\u00ad]/g, '').replace(/\s+/g, ' ').trim();
const SKIP = new Set(['SCRIPT', 'STYLE', 'NOSCRIPT', 'TEMPLATE', 'HEAD', 'TITLE', 'META', 'LINK']);

// ---------------------------------------------------------------- parsing
function readQuoted(s, i) {
  const q = s[i]; let j = i + 1, out = '';
  while (j < s.length && s[j] !== q) { if (s[j] === '\\') { out += s[j + 1] ?? ''; j += 2; } else out += s[j++]; }
  if (q === '"') { try { out = JSON.parse(s.slice(i, j + 1)); } catch (e) {} }
  return { value: out, end: j + 1 };
}
function splitChain(sel) {
  const parts = []; let cur = '', q = null, depth = 0;
  for (let i = 0; i < sel.length; i++) {
    const c = sel[i];
    if (q) { cur += c; if (c === '\\') { cur += sel[++i] ?? ''; } else if (c === q) q = null; continue; }
    if (c === '"' || c === "'" || c === '`') { q = c; cur += c; continue; }
    if (c === '[' || c === '(') depth++;
    else if (c === ']' || c === ')') depth--;
    if (depth === 0 && c === '>' && sel[i + 1] === '>') { parts.push(cur.trim()); cur = ''; i++; continue; }
    cur += c;
  }
  if (cur.trim()) parts.push(cur.trim());
  return parts.map(parsePart);
}
const ENGINES = new Set(['css', 'text', 'xpath', 'id', 'data-testid', 'data-test-id', 'data-test', 'role', 'nth', 'visible',
  'internal:text', 'internal:has-text', 'internal:has-not-text', 'internal:has', 'internal:has-not', 'internal:and',
  'internal:or', 'internal:label', 'internal:attr', 'internal:role', 'internal:testid', 'internal:control']);
function parsePart(p) {
  const m = /^([a-zA-Z_:\-]+)\s*=\s*([\s\S]*)$/.exec(p);
  if (m && ENGINES.has(m[1])) return { engine: m[1], body: m[2] };
  if (p.startsWith('//') || p.startsWith('..') || p.startsWith('(//')) return { engine: 'xpath', body: p };
  if (p.startsWith('"') || p.startsWith("'")) return { engine: 'text', body: p };
  return { engine: 'css', body: p };
}
// text matcher: /re/flags | "exact"s | "substring"i | bare substring (ci)
function matcher(body, quotedExact) {
  body = body.trim();
  const rm = /^\/([\s\S]*)\/([a-z]*)$/.exec(body);
  if (rm) { const re = new RegExp(rm[1], rm[2]); return t => { re.lastIndex = 0; return re.test(t); }; }
  if (body[0] === '"' || body[0] === "'") {
    const { value, end } = readQuoted(body, 0);
    const suffix = body.slice(end);
    const v = norm(value);
    if (suffix === 's' || (suffix === '' && quotedExact)) return t => norm(t) === v;
    const lv = v.toLowerCase(); return t => norm(t).toLowerCase().includes(lv);
  }
  const lv = norm(body).toLowerCase(); return t => norm(t).toLowerCase().includes(lv);
}
// [name="value"i] list -> [{name, value(matcher|null), raw}]
function parseAttrs(s) {
  const out = []; let i = 0;
  while (i < s.length) {
    if (s[i] !== '[') { i++; continue; }
    let j = i + 1, name = '';
    while (j < s.length && !'=]'.includes(s[j])) name += s[j++];
    let raw = null;
    if (s[j] === '=') {
      j++;
      if (s[j] === '"' || s[j] === "'") { const r = readQuoted(s, j); let e = r.end; while (/[is]/.test(s[e] ?? '')) e++; raw = s.slice(j, e); j = e; }
      else if (s[j] === '/') { let e = j + 1; while (e < s.length && s[e] !== '/') { if (s[e] === '\\') e++; e++; } e++; while (/[a-z]/.test(s[e] ?? '')) e++; raw = s.slice(j, e); j = e; }
      else { let v = ''; while (j < s.length && s[j] !== ']') v += s[j++]; raw = v.trim(); }
    }
    while (j < s.length && s[j] !== ']') j++;
    out.push({ name: name.trim(), raw });
    i = j + 1;
  }
  return out;
}

// ---------------------------------------------------------------- traversal
function* deep(root) {
  const stack = [];
  const pushKids = n => { const k = n.children; for (let i = k.length - 1; i >= 0; i--) stack.push(k[i]); };
  if (root.shadowRoot) pushKids(root.shadowRoot);
  pushKids(root.nodeType === 9 ? root.documentElement ? { children: [root.documentElement] } : { children: [] } : root);
  while (stack.length) {
    const e = stack.pop(); yield e;
    if (e.shadowRoot) pushKids(e.shadowRoot);
    pushKids(e);
  }
}
function parentOf(n) { return n.parentElement || (n.parentNode && n.parentNode.host) || null; }
function composedContains(a, b) { for (let n = b; n; n = parentOf(n)) if (n === a) return true; return false; }
function sortDoc(arr) { return [...new Set(arr)].sort((a, b) => a === b ? 0 : (a.compareDocumentPosition(b) & 2) ? 1 : -1); }

function elementText(el, cache) {
  let t = cache.get(el);
  if (t === undefined) {
    if (el.nodeName === 'INPUT' && ['button', 'submit', 'reset'].includes(el.type)) t = el.value;
    else {
      t = '';
      const walk = n => { for (let c = n.firstChild; c; c = c.nextSibling) { if (c.nodeType === 3) t += c.nodeValue; else if (c.nodeType === 1 && !SKIP.has(c.nodeName)) walk(c); } if (n.shadowRoot) walk(n.shadowRoot); };
      walk(el);
    }
    t = norm(t); cache.set(el, t);
  }
  return t;
}

// ---------------------------------------------------------------- visibility & state
function isVisible(el) {
  if (!el.isConnected) return false;
  const st = getComputedStyle(el);
  if (st.display === 'contents') {
    for (let c = el.firstChild; c; c = c.nextSibling) {
      if (c.nodeType === 1 && isVisible(c)) return true;
      if (c.nodeType === 3 && c.nodeValue.trim()) { const r = document.createRange(); r.selectNodeContents(c); const b = r.getBoundingClientRect(); if (b.width > 0 && b.height > 0) return true; }
    }
    return false;
  }
  if (el.checkVisibility && !el.checkVisibility()) return false;
  if (st.visibility !== 'visible') return false;
  const r = el.getBoundingClientRect();
  return r.width > 0 && r.height > 0;
}
function ariaDisabled(el) { for (let n = el; n; n = parentOf(n)) if (n.getAttribute && n.getAttribute('aria-disabled') === 'true') return true; return false; }
const FORM = new Set(['BUTTON', 'INPUT', 'SELECT', 'TEXTAREA', 'OPTION', 'OPTGROUP', 'FIELDSET']);
function isDisabled(el) { return (FORM.has(el.nodeName) && el.matches(':disabled')) || ariaDisabled(el); }
function isEditableEl(el) {
  if (isDisabled(el)) return false;
  if (['INPUT', 'TEXTAREA', 'SELECT'].includes(el.nodeName)) return !el.readOnly && el.getAttribute('aria-readonly') !== 'true';
  if (el.isContentEditable) return true;
  return el.hasAttribute('role') && el.getAttribute('aria-readonly') !== 'true';
}
function checkedState(el) {
  if (el.nodeName === 'INPUT' && (el.type === 'checkbox' || el.type === 'radio')) return el.checked;
  const role = getRole(el);
  if (['checkbox', 'radio', 'switch', 'menuitemcheckbox', 'menuitemradio', 'option', 'treeitem'].includes(role)) {
    const a = el.getAttribute('aria-checked'); if (a === 'true') return true; if (a === 'mixed') return 'mixed'; return false;
  }
  if (el.nodeName === 'LABEL' && el.control) return checkedState(el.control);
  throw new Error('Not a checkbox or radio button');
}

// ---------------------------------------------------------------- ARIA
const INPUT_ROLES = { button: 'button', image: 'button', reset: 'button', submit: 'button', checkbox: 'checkbox', radio: 'radio',
  range: 'slider', number: 'spinbutton', search: 'searchbox', email: 'textbox', tel: 'textbox', text: 'textbox', url: 'textbox', password: 'textbox', '': 'textbox' };
function implicitRole(el) {
  const n = el.nodeName;
  switch (n) {
    case 'A': case 'AREA': return el.hasAttribute('href') ? 'link' : null;
    case 'ARTICLE': return 'article'; case 'ASIDE': return 'complementary'; case 'BUTTON': return 'button';
    case 'DATALIST': return 'listbox'; case 'DD': return 'definition'; case 'DETAILS': return 'group'; case 'DIALOG': return 'dialog';
    case 'DT': return 'term'; case 'FIELDSET': return 'group'; case 'FIGURE': return 'figure';
    case 'FOOTER': return el.closest('article,aside,main,nav,section') ? null : 'contentinfo';
    case 'HEADER': return el.closest('article,aside,main,nav,section') ? null : 'banner';
    case 'FORM': return (el.hasAttribute('aria-label') || el.hasAttribute('aria-labelledby') || el.hasAttribute('name')) ? 'form' : null;
    case 'H1': case 'H2': case 'H3': case 'H4': case 'H5': case 'H6': return 'heading';
    case 'HR': return 'separator';
    case 'IMG': return el.getAttribute('alt') === '' && !el.hasAttribute('title') ? 'presentation' : 'img';
    case 'INPUT': {
      const t = (el.getAttribute('type') || '').toLowerCase();
      if (t === 'hidden' || t === 'file' || t === 'color' || t === 'date') return null;
      if (el.hasAttribute('list') && ['text', 'search', 'tel', 'url', 'email', ''].includes(t)) return 'combobox';
      return INPUT_ROLES[t] ?? 'textbox';
    }
    case 'LI': return 'listitem'; case 'MAIN': return 'main'; case 'MATH': return 'math'; case 'MENU': return 'list';
    case 'METER': return 'meter'; case 'NAV': return 'navigation'; case 'OL': case 'UL': return 'list';
    case 'OPTGROUP': return 'group'; case 'OPTION': return 'option'; case 'OUTPUT': return 'status'; case 'P': return 'paragraph';
    case 'PROGRESS': return 'progressbar';
    case 'SECTION': return (el.hasAttribute('aria-label') || el.hasAttribute('aria-labelledby')) ? 'region' : null;
    case 'SELECT': return (el.multiple || el.size > 1) ? 'listbox' : 'combobox';
    case 'SUMMARY': return 'button'; case 'TABLE': return 'table'; case 'TBODY': case 'THEAD': case 'TFOOT': return 'rowgroup';
    case 'TD': return 'cell'; case 'TEXTAREA': return 'textbox'; case 'TH': return el.getAttribute('scope') === 'row' ? 'rowheader' : 'columnheader';
    case 'TR': return 'row'; case 'BLOCKQUOTE': return 'blockquote'; case 'CAPTION': return 'caption'; case 'CODE': return 'code';
    case 'DEL': return 'deletion'; case 'INS': return 'insertion'; case 'EM': return 'emphasis'; case 'STRONG': return 'strong';
    case 'SVG': return 'img';
  }
  return null;
}
function getRole(el) {
  const explicit = (el.getAttribute('role') || '').trim().split(/\s+/)[0];
  if (explicit) return explicit === 'none' ? 'presentation' : explicit;
  return implicitRole(el);
}
const NAME_FROM_CONTENT = new Set(['button', 'cell', 'checkbox', 'columnheader', 'gridcell', 'heading', 'link', 'menuitem',
  'menuitemcheckbox', 'menuitemradio', 'option', 'radio', 'row', 'rowheader', 'switch', 'tab', 'tooltip', 'treeitem', 'listitem', 'term']);
function textAlt(n) {
  let t = '';
  for (let c = n.firstChild; c; c = c.nextSibling) {
    if (c.nodeType === 3) t += c.nodeValue;
    else if (c.nodeType === 1 && !SKIP.has(c.nodeName)) {
      if (c.getAttribute('aria-hidden') === 'true') continue;
      if (c.hasAttribute('aria-label')) t += ' ' + c.getAttribute('aria-label') + ' ';
      else if (c.nodeName === 'IMG') t += ' ' + (c.getAttribute('alt') || '') + ' ';
      else { const d = getComputedStyle(c).display; const block = d !== 'inline'; t += (block ? ' ' : '') + textAlt(c) + (block ? ' ' : ''); }
    }
  }
  if (n.shadowRoot) t += textAlt(n.shadowRoot);
  return t;
}
function accessibleName(el) {
  const lb = el.getAttribute('aria-labelledby');
  if (lb) { const t = lb.split(/\s+/).map(id => { const r = el.getRootNode().getElementById?.(id) || document.getElementById(id); return r ? textAlt(r) : ''; }).join(' '); if (norm(t)) return norm(t); }
  const al = el.getAttribute('aria-label'); if (al && norm(al)) return norm(al);
  const n = el.nodeName;
  if (n === 'INPUT' || n === 'TEXTAREA' || n === 'SELECT' || n === 'METER' || n === 'PROGRESS' || n === 'OUTPUT') {
    if (n === 'INPUT' && ['button', 'submit', 'reset'].includes(el.type)) return norm(el.value || (el.type === 'submit' ? 'Submit' : el.type === 'reset' ? 'Reset' : ''));
    if (n === 'INPUT' && el.type === 'image') return norm(el.alt || el.value || 'Submit');
    const labels = el.labels ? [...el.labels].map(l => textAlt(l)).join(' ') : '';
    if (norm(labels)) return norm(labels);
    return norm(el.getAttribute('title') || el.getAttribute('placeholder') || '');
  }
  if (n === 'IMG' || n === 'AREA') return norm(el.getAttribute('alt') || el.getAttribute('title') || '');
  if (n === 'FIELDSET') { const lg = el.querySelector(':scope > legend'); if (lg) return norm(textAlt(lg)); }
  if (n === 'TABLE') { const c = el.querySelector(':scope > caption'); if (c) return norm(textAlt(c)); }
  if (n === 'FIGURE') { const c = el.querySelector(':scope > figcaption'); if (c) return norm(textAlt(c)); }
  const role = getRole(el);
  if (NAME_FROM_CONTENT.has(role)) { const t = norm(textAlt(el)); if (t) return t; }
  return norm(el.getAttribute('title') || '');
}
function isAriaHidden(el) {
  for (let n = el; n; n = parentOf(n)) {
    if (n.getAttribute && n.getAttribute('aria-hidden') === 'true') return true;
    if (n.nodeType === 1) { const st = getComputedStyle(n); if (st.display === 'none') return true; if (n === el && st.visibility !== 'visible') return true; }
  }
  return false;
}
function roleProp(el, prop) {
  switch (prop) {
    case 'checked': try { return checkedState(el); } catch { return false; }
    case 'disabled': return isDisabled(el);
    case 'expanded': { const v = el.getAttribute('aria-expanded'); return v === null ? (el.nodeName === 'DETAILS' ? el.open : undefined) : v === 'true'; }
    case 'pressed': { const v = el.getAttribute('aria-pressed'); return v === 'mixed' ? 'mixed' : v === 'true'; }
    case 'selected': { const v = el.getAttribute('aria-selected'); if (v !== null) return v === 'true'; return el.nodeName === 'OPTION' ? el.selected : false; }
    case 'level': { const v = el.getAttribute('aria-level'); if (v) return +v; const m = /^H(\d)$/.exec(el.nodeName); return m ? +m[1] : undefined; }
  }
}

// ---------------------------------------------------------------- engines
function runEngine(part, roots, prevRoots, cache) {
  const { engine, body } = part;
  const out = [];
  const fromRoots = fn => { for (const r of roots) for (const e of fn(r)) out.push(e); return roots.length > 1 ? sortDoc(out) : out; };
  switch (engine) {
    case 'css': return fromRoots(r => cssQuery(r, body, cache));
    case 'xpath': return fromRoots(r => {
      const doc = r.nodeType === 9 ? r : r.ownerDocument; let x = body;
      if (r.nodeType !== 9 && x.startsWith('/')) x = '.' + x;
      const res = doc.evaluate(x, r, null, XPathResult.ORDERED_NODE_SNAPSHOT_TYPE, null);
      const a = []; for (let i = 0; i < res.snapshotLength; i++) { const n = res.snapshotItem(i); if (n.nodeType === 1) a.push(n); } return a;
    });
    case 'text': case 'internal:text': {
      const m = matcher(body, engine === 'text');
      return fromRoots(r => {
        const matched = [];
        for (const e of deep(r)) if (!SKIP.has(e.nodeName) && m(elementText(e, cache))) matched.push(e);
        const hasMatchedChild = new Set();
        for (const e of matched) for (let p = parentOf(e); p; p = parentOf(p)) { if (hasMatchedChild.has(p)) break; hasMatchedChild.add(p); }
        return matched.filter(e => !hasMatchedChild.has(e));
      });
    }
    case 'id': case 'data-testid': case 'data-test-id': case 'data-test': {
      const attr = engine === 'id' ? 'id' : engine; const v = body.replace(/^["']|["']$/g, '');
      return fromRoots(r => { const a = []; for (const e of deep(r)) if (e.getAttribute(attr) === v) a.push(e); return a; });
    }
    case 'internal:attr': case 'internal:testid': {
      const [{ name, raw }] = parseAttrs(body); const m = matcher(raw ?? '', false);
      return fromRoots(r => { const a = []; for (const e of deep(r)) { const v = e.getAttribute(name); if (v !== null && m(v)) a.push(e); } return a; });
    }
    case 'internal:label': {
      const m = matcher(body, false);
      return fromRoots(r => {
        const a = [];
        for (const e of deep(r)) {
          const texts = [];
          if (e.labels) for (const l of e.labels) texts.push(elementText(l, cache));
          const lb = e.getAttribute('aria-labelledby');
          if (lb) for (const id of lb.split(/\s+/)) { const t = document.getElementById(id); if (t) texts.push(elementText(t, cache)); }
          const al = e.getAttribute('aria-label'); if (al) texts.push(al);
          if (texts.some(t => m(t))) a.push(e);
        }
        return a;
      });
    }
    case 'role': case 'internal:role': {
      const role = /^[\w-]+/.exec(body)[0].toLowerCase();
      const attrs = parseAttrs(body.slice(role.length));
      let includeHidden = false; const checks = [];
      for (const { name, raw } of attrs) {
        if (name === 'include-hidden') { includeHidden = raw === null || raw === 'true'; continue; }
        if (name === 'name') { const m = matcher(raw, engine === 'role'); checks.push(e => m(accessibleName(e))); continue; }
        const want = raw === 'true' ? true : raw === 'false' ? false : raw === 'mixed' ? 'mixed' : /^\d+$/.test(raw) ? +raw : raw;
        checks.push(e => { const v = roleProp(e, name); return name === 'checked' && want === true ? v === true : v === want || (want === false && !v); });
      }
      return fromRoots(r => {
        const a = [];
        for (const e of deep(r)) {
          if (getRole(e) !== role) continue;
          if (!includeHidden && isAriaHidden(e)) continue;
          if (checks.every(c => c(e))) a.push(e);
        }
        return a;
      });
    }
    default: throw new Error('Unknown selector engine "' + engine + '"');
  }
}
const PSEUDO = /:(visible|has-text|text-is|text-matches|text)(?:\(((?:"(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*'|[^)])*)\))?/g;
function cssQuery(root, css, cache) {
  const extras = [];
  const clean = css.replace(PSEUDO, (all, name, arg) => { extras.push([name, arg]); return ''; }).trim() || '*';
  const out = [];
  const visit = r => {
    for (const e of r.querySelectorAll(clean)) out.push(e);
    for (const e of r.querySelectorAll('*')) if (e.shadowRoot) visit(e.shadowRoot);
  };
  if (root.shadowRoot) visit(root.shadowRoot);
  visit(root);
  if (!extras.length) return out;
  return out.filter(e => extras.every(([name, arg]) => {
    if (name === 'visible') return isVisible(e);
    const a = arg === undefined ? '' : arg.trim();
    const unq = a[0] === '"' || a[0] === "'" ? readQuoted(a, 0).value : a;
    const t = elementText(e, cache);
    if (name === 'has-text' || name === 'text') return t.toLowerCase().includes(norm(unq).toLowerCase());
    if (name === 'text-is') return t === norm(unq);
    if (name === 'text-matches') return new RegExp(unq).test(t);
    return true;
  }));
}

function query(selector, root) {
  const cache = new Map();
  let roots = [root || document], prev = roots;
  for (const part of splitChain(selector)) {
    const { engine, body } = part;
    if (engine === 'nth') { const i = +body; const e = i < 0 ? roots[roots.length + i] : roots[i]; prev = roots; roots = e ? [e] : []; continue; }
    if (engine === 'visible') { const want = body !== 'false'; roots = roots.filter(e => isVisible(e) === want); continue; }
    if (engine === 'internal:has-text' || engine === 'internal:has-not-text') {
      const m = matcher(body, false); const neg = engine === 'internal:has-not-text';
      roots = roots.filter(e => m(elementText(e, cache)) !== neg); continue;
    }
    if (engine === 'internal:has' || engine === 'internal:has-not') {
      const inner = JSON.parse(body); const neg = engine === 'internal:has-not';
      roots = roots.filter(e => (query(inner, e).length > 0) !== neg); continue;
    }
    if (engine === 'internal:and') { const other = new Set(prev.flatMap(r => query(JSON.parse(body), r))); roots = roots.filter(e => other.has(e)); continue; }
    if (engine === 'internal:or') { roots = sortDoc([...roots, ...prev.flatMap(r => query(JSON.parse(body), r))]); continue; }
    if (engine === 'internal:control') throw new Error('internal:control must be handled by the driver');
    prev = roots;
    roots = runEngine(part, roots, prev, cache);
  }
  return roots;
}

function describe(el) {
  let s = '<' + el.nodeName.toLowerCase();
  for (const a of ['id', 'class', 'name', 'type', 'role', 'data-testid', 'aria-label']) { const v = el.getAttribute(a); if (v) s += ` ${a}="${v.slice(0, 40)}"`; }
  const t = norm(el.textContent).slice(0, 40);
  return s + '>' + t + (t ? '…' : '');
}
const raf = () => new Promise(r => requestAnimationFrame(() => r()));
function inViewport(r) { return r.top >= 0 && r.left >= 0 && r.bottom <= innerHeight && r.right <= innerWidth; }
function hitTarget(el, x, y) {
  let hit = (el.getRootNode().elementFromPoint ? el.getRootNode() : document).elementFromPoint(x, y);
  while (hit && hit.shadowRoot) { const inner = hit.shadowRoot.elementFromPoint(x, y); if (!inner || inner === hit) break; hit = inner; }
  if (!hit) return 'nothing';
  if (composedContains(el, hit)) return null;
  if (el.nodeName === 'LABEL' && el.control && composedContains(el.control, hit)) return null;
  if (hit.nodeName === 'LABEL' && hit.control === el) return null;
  return describe(hit);
}
const NEEDS_ENABLED = new Set(['click', 'dblclick', 'check', 'uncheck', 'tap', 'fill', 'selectOption', 'clear', 'setInputFiles', 'selectText', 'dragTo']);

const api = {
  query, describe,
  one(sel, strict) {
    const els = query(sel);
    if (strict && els.length > 1) throw new Error(`strict mode violation: "${sel}" resolved to ${els.length} elements:\n` + els.slice(0, 10).map((e, i) => `    ${i + 1}) ${describe(e)}`).join('\n'));
    return els[0] || null;
  },
  // returns {status:'ok', x, y, box} | {status:'retry', reason}
  async prepare(sel, strict, action, opts) {
    const el = api.one(sel, strict);
    if (!el) return { status: 'retry', reason: 'waiting for ' + sel };
    if (!el.isConnected) return { status: 'retry', reason: 'element is not attached to the DOM' };
    if (!opts.force) {
      if (!isVisible(el)) return { status: 'retry', reason: 'element is not visible' };
      if (NEEDS_ENABLED.has(action) && isDisabled(el)) return { status: 'retry', reason: 'element is not enabled' };
      if ((action === 'fill' || action === 'clear') && !isEditableEl(el)) return { status: 'retry', reason: 'element is not editable' };
    }
    let r = el.getBoundingClientRect();
    if (!inViewport(r)) { el.scrollIntoView({ block: 'center', inline: 'center', behavior: 'instant' }); r = el.getBoundingClientRect(); }
    if (!opts.force && action !== 'fill' && action !== 'focus') {
      await raf(); await raf();
      const r2 = el.getBoundingClientRect();
      if (r2.x !== r.x || r2.y !== r.y || r2.width !== r.width || r2.height !== r.height) return { status: 'retry', reason: 'element is not stable' };
      r = r2;
    }
    const x = r.left + (opts.position ? opts.position.x : r.width / 2);
    const y = r.top + (opts.position ? opts.position.y : r.height / 2);
    if (!opts.force && action !== 'fill' && action !== 'focus' && action !== 'screenshot' && action !== 'setInputFiles') {
      const blocker = hitTarget(el, x, y);
      if (blocker) return { status: 'retry', reason: blocker + ' intercepts pointer events' };
    }
    return { status: 'ok', x, y, box: { x: r.left, y: r.top, width: r.width, height: r.height } };
  },
  fill(sel, strict, value, force) {
    const el = api.one(sel, strict);
    if (!el) return 'retry';
    if (!force && (!isVisible(el) || !isEditableEl(el))) return 'retry';
    const n = el.nodeName;
    if (n === 'INPUT') {
      const t = el.type.toLowerCase();
      if (['checkbox', 'radio', 'file', 'button', 'submit', 'reset', 'image', 'hidden'].includes(t)) throw new Error(`Input of type "${t}" cannot be filled`);
      if (t === 'number' && value !== '' && isNaN(Number(value))) throw new Error('Cannot type text into input[type=number]');
      if (['color', 'date', 'time', 'datetime-local', 'month', 'range', 'week'].includes(t)) {
        el.focus(); el.value = value;
        if (el.value !== value) throw new Error('Malformed value');
        el.dispatchEvent(new Event('input', { bubbles: true, composed: true })); el.dispatchEvent(new Event('change', { bubbles: true }));
        return 'done';
      }
      el.focus(); el.select(); return 'type';
    }
    if (n === 'TEXTAREA') { el.focus(); el.select(); return 'type'; }
    if (el.isContentEditable) {
      el.focus(); const range = document.createRange(); range.selectNodeContents(el);
      const s = getSelection(); s.removeAllRanges(); s.addRange(range); return 'type';
    }
    throw new Error('Element is not an <input>, <textarea> or [contenteditable] element');
  },
  selectOption(sel, strict, opts, force) {
    const el = api.one(sel, strict);
    if (!el) return null;
    if (!force && (!isVisible(el) || isDisabled(el))) return null;
    if (el.nodeName !== 'SELECT') throw new Error('Element is not a <select> element');
    const options = [...el.options]; const picked = [];
    for (const o of opts) {
      const opt = options.find(x => (o.value !== undefined && x.value === o.value) || (o.label !== undefined && x.label === o.label) || (o.index !== undefined && x.index === o.index) || (o.any !== undefined && (x.value === o.any || x.label === o.any)));
      if (!opt) return null;
      picked.push(opt);
      if (!el.multiple) break;
    }
    for (const x of options) x.selected = picked.includes(x);
    el.dispatchEvent(new Event('input', { bubbles: true, composed: true })); el.dispatchEvent(new Event('change', { bubbles: true }));
    return picked.map(x => x.value);
  },
  // read-only queries; non-strict ones return arrays
  read(sel, strict, op, arg) {
    if (op === 'count') return query(sel).length;
    if (op === 'allTextContents') return query(sel).map(e => e.textContent);
    if (op === 'allInnerTexts') return query(sel).map(e => e.innerText);
    const el = api.one(sel, strict);
    if (op === 'isVisible') return !!el && isVisible(el);
    if (op === 'isHidden') return !el || !isVisible(el);
    if (!el) return { missing: true };
    switch (op) {
      case 'textContent': return el.textContent;
      case 'innerText': return el.innerText;
      case 'innerHTML': return el.innerHTML;
      case 'getAttribute': return el.getAttribute(arg);
      case 'inputValue':
        if (!['INPUT', 'TEXTAREA', 'SELECT'].includes(el.nodeName)) throw new Error('Not an input element');
        return el.value;
      case 'isEnabled': return !isDisabled(el);
      case 'isDisabled': return isDisabled(el);
      case 'isEditable': return isEditableEl(el);
      case 'isChecked': return checkedState(el) === true;
      case 'boundingBox': { if (!isVisible(el)) return null; const r = el.getBoundingClientRect(); return { x: r.left, y: r.top, width: r.width, height: r.height }; }
      case 'focus': el.focus(); return true;
      case 'blur': el.blur(); return true;
      case 'scrollIntoView': el.scrollIntoView({ block: 'center', inline: 'center', behavior: 'instant' }); return true;
      case 'selectText':
        if (el.select) { el.focus(); el.select(); } else { const r = document.createRange(); r.selectNodeContents(el); const s = getSelection(); s.removeAllRanges(); s.addRange(r); el.focus?.(); }
        return true;
      case 'dispatchEvent': {
        const { type, init } = arg; const i = Object.assign({ bubbles: true, cancelable: true, composed: true }, init || {});
        const C = /^(click|dblclick|mouse|contextmenu|auxclick)/.test(type) ? MouseEvent : /^pointer/.test(type) ? PointerEvent
          : /^key/.test(type) ? KeyboardEvent : /^(focus|blur)/.test(type) ? FocusEvent : /^drag|^drop/.test(type) ? DragEvent : /^touch/.test(type) ? TouchEvent : Event;
        el.dispatchEvent(new C(type, i)); return true;
      }
      case 'isFileInput': return el.nodeName === 'INPUT' && el.type === 'file';
      case 'ariaSnapshot': return snapshot(el, 0);
    }
    throw new Error('unknown op ' + op);
  },
  // state: attached | detached | visible | hidden
  async waitState(sel, strict, state, ms) {
    const end = Date.now() + ms;
    for (;;) {
      const el = api.one(sel, strict);
      const ok = state === 'attached' ? !!el : state === 'detached' ? !el : state === 'visible' ? !!el && isVisible(el) : !el || !isVisible(el);
      if (ok) return true;
      if (Date.now() >= end) return false;
      await new Promise(r => setTimeout(r, 16));
    }
  },
};
function snapshot(el, depth) {
  const role = getRole(el); let out = '';
  const pad = '  '.repeat(depth);
  if (role && role !== 'presentation' && role !== 'generic' && !isAriaHidden(el)) {
    const name = accessibleName(el); out += `${pad}- ${role}${name ? ` "${name}"` : ''}\n`; depth++;
  }
  for (const c of el.children) out += snapshot(c, depth);
  return out;
}
Object.defineProperty(globalThis, '__pwlite', { value: api, enumerable: false });
return true;
})()
JS;
}
