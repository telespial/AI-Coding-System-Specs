# AICS Project Structure

## Canonical Layout for Controlled AI-Assisted Coding Projects

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS benefits from a predictable project layout. When generated artifacts, patches, validation outputs, and restore points are scattered, review becomes harder and rollback becomes unreliable. This document establishes a recommended canonical layout.

* * *

## 1. Recommended Layout

```text
/project-root
    /specs
    /models
    /src
    /include
    /generated
    /patches
    /validation
    /logs
    /states
        /golden
        /working
        /candidate
        /failsafe
        /recovery
```

* * *

## 2. Folder Meaning

### /specs

Project-linked specifications such as MRD, MDF, EIL integration notes, and AICS task constraints.

### /models

Model packages, metadata, or deployment artifacts relevant to MDF and EIL usage.

### /src and /include

Primary source areas for the engineer-owned codebase.

### /generated

Generated scaffolding, temporary artifacts, or AI-produced files that have not yet been promoted into permanent source locations.

### /patches

Unified diffs, change patches, and patch chains used for review and reconstruction.

### /validation

Compile output, lint results, test summaries, size reports, and related validation artifacts.

### /logs

Session logs, execution records, and human-readable coding activity traces.

### /states

Restorable state snapshots used for promotion, rollback, and recovery.

* * *

## 3. Structural Rules

AICS should clearly distinguish between:

* source-of-truth code
* generated candidate artifacts
* review artifacts
* disposable intermediate output
* promoted stable states

That separation makes it much easier to understand what is safe to edit, safe to delete, or safe to promote.
