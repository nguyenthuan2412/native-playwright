<?php
namespace NativePlaywright;

final class FileChooser
{
    public function __construct(private Page $page, private int $backendNodeId, private bool $multiple)
    {
    }

    public function page(): Page
    {
        return $this->page;
    }

    public function isMultiple(): bool
    {
        return $this->multiple;
    }

    /** @param string|array $files path(s) or ['name'=>, 'mimeType'=>, 'buffer'=>] payload(s) */
    public function setFiles(string|array $files): void
    {
        $this->page->send('DOM.setFileInputFiles', ['files' => Locator::materializeFiles($files), 'backendNodeId' => $this->backendNodeId]);
    }
}
