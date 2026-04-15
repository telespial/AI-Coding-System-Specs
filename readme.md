# AI Integrated Coding System (AICS)

## A Controlled System for Reviewable AI-Assisted Code Generation in Embedded Projects

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

Part of the EmbeddedX platform:
https://github.com/telespial/EmbeddedX-Specs

* * *

## Abstract

AI-assisted coding can speed up embedded development, but most tools are too loose for real engineering work.

Common problems:

- too much code regenerated at once
- changes hidden from the engineer
- hardware constraints ignored
- no clear rollback or recovery path

AICS defines a controlled system for AI-assisted coding that keeps:

- changes visible
- results testable
- projects recoverable

* * *

## 1. Core System Model

AICS preserves:

- file-level control over changes
- diff-based visibility
- validation during generation
- logs and reports for engineers
- structured project states

If you cannot see the change, you cannot trust the change.

* * *

## 2. Restore Points

AICS defines explicit project states:

- **golden** - known good baseline  
- **working** - active editable state  
- **candidate** - generated state pending validation  
- **failsafe** - rollback-safe fallback  
- **recovery** - last stable restore point  

These states prevent projects from drifting or breaking silently.

* * *

## 3. Why AICS Matters

Embedded projects depend on:

- datasheets
- schematics
- netlists
- board files
- firmware structure

AI must respect these constraints.

AICS ensures generated code:

- matches hardware reality
- follows project rules
- stays reviewable by engineers

* * *

## 4. Relationship to Other Repositories

- EmbeddedX-Specs: umbrella platform  
- Machine-Readable-Datasheets-Specs: describes hardware capability  
- Machine-Readable-Connectivity-Specs: enables board-aware code generation  
- Model-Definition-Package-Specs: defines model behavior  
- Embedded-Intelligence-Layer-Specs: defines runtime boundaries  
- Embedded-Intelligence-Package-Specs: packages generated outputs  

* * *

## 5. Core Principle

AI-assisted coding should act like a controlled engineering workflow.

Every change should be:

- visible  
- testable  
- reversible  

* * *

## License

See `license.md`.
