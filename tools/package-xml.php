<?php
// Writes ext/package.xml (PECL) listing every file in ext/.
// php tools/package-xml.php <ext-dir> <version>
[$_, $dir, $version] = $argv;
$lead = [
    'name'  => getenv('MAINTAINER_NAME') ?: 'nguyenthuan2412',
    'user'  => getenv('MAINTAINER_USER') ?: 'nguyenthuan2412',
    'email' => getenv('MAINTAINER_EMAIL') ?: 'thuanvp012van@gmail.com',
];
$files = [];
$it = new RecursiveIteratorIterator(new RecursiveDirectoryIterator($dir, FilesystemIterator::SKIP_DOTS));
foreach ($it as $f) {
    $rel = substr($f->getPathname(), strlen(rtrim($dir, '/')) + 1);
    if ($rel === 'package.xml') {
        continue;
    }
    $files[] = $rel;
}
sort($files);
$x = fn(string $s) => htmlspecialchars($s, ENT_XML1);
$contents = '';
foreach ($files as $rel) {
    $role = preg_match('#(^|/)(LICENSE|NOTICE|COPYRIGHT\.txt|README\.md)$#', $rel) ? 'doc' : 'src';
    $contents .= "   <file name=\"{$x($rel)}\" role=\"$role\"/>\n";
}
$date = gmdate('Y-m-d');
$xml = <<<XML
<?xml version="1.0" encoding="UTF-8"?>
<package packagerversion="1.10.13" version="2.0" xmlns="http://pear.php.net/dtd/package-2.0" xmlns:tasks="http://pear.php.net/dtd/tasks-1.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://pear.php.net/dtd/tasks-1.0 http://pear.php.net/dtd/tasks-1.0.xsd http://pear.php.net/dtd/package-2.0 http://pear.php.net/dtd/package-2.0.xsd">
 <name>native_playwright</name>
 <channel>pecl.php.net</channel>
 <summary>Playwright-style browser automation for PHP over CDP, without Node.js</summary>
 <description>Drives Chromium directly over the Chrome DevTools Protocol (pipe transport) with a Playwright-compatible API: locators with auto-waiting, network interception, frames, dialogs, downloads, screenshots and PDF. Works in plain PHP and inside Swoole coroutines. Written in PHP and compiled to C++ with TypePHP.</description>
 <lead>
  <name>{$x($lead['name'])}</name>
  <user>{$x($lead['user'])}</user>
  <email>{$x($lead['email'])}</email>
  <active>yes</active>
 </lead>
 <date>$date</date>
 <version>
  <release>$version</release>
  <api>$version</api>
 </version>
 <stability>
  <release>beta</release>
  <api>beta</api>
 </stability>
 <license uri="https://www.apache.org/licenses/LICENSE-2.0">Apache-2.0</license>
 <notes>See https://github.com/{$x($lead['user'])}/native-playwright/releases</notes>
 <contents>
  <dir name="/">
$contents  </dir>
 </contents>
 <dependencies>
  <required>
   <php>
    <min>8.4.0</min>
    <max>8.5.99</max>
   </php>
   <pearinstaller>
    <min>1.10.0</min>
   </pearinstaller>
  </required>
 </dependencies>
 <providesextension>native_playwright</providesextension>
 <extsrcrelease>
  <configureoption name="with-gmp-dir" default="no" prompt="GMP/MPFR install prefix (no = auto-detect)"/>
 </extsrcrelease>
</package>

XML;
file_put_contents("$dir/package.xml", $xml);
echo "package.xml: " . count($files) . " files\n";
