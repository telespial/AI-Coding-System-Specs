# AI Integrated Coding System (AICS)

[← Back to EmbeddedX-Specs (canonical index)](https://github.com/telespial/EmbeddedX-Specs)

## Controls for Reviewable AI-Assisted Code Generation

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See [LICENSE.md](./LICENSE.md) for more information.

Part of the **EmbeddedX specification family**.

**Canonical index:** start at `EmbeddedX-Specs`:
https://github.com/telespial/EmbeddedX-Specs

* * *

## Abstract

AI-assisted coding can accelerate embedded software development, but most current systems remain too open-ended for production engineering. They often regenerate too much code, hide important changes, ignore hardware and interface constraints, and fail to provide the visibility needed for engineers to review, validate, and modify the result.

AICS defines a controlled framework for AI-assisted code generation and modification. It uses explicit constraints, diff-based changes, validation loops, execution feedback, and recoverable project states so generated code stays reviewable and aligned with embedded engineering requirements.

* * *

## 1. Core System Model

AICS should preserve:

* file-scoped operation
* diff-based change visibility
* validation as part of generation
* engineer-visible logs and reports
* recoverable project states
* clear promotion and rollback rules

If you can’t see the change, you can’t trust the change.

* * *

## 2. Restore Points

AICS should establish explicit restore points such as:

* **golden** - known good promoted baseline
* **working** - active editable state
* **candidate** - newly generated state pending validation
* **failsafe** - rollback-safe fallback state
* **recovery** - most recent restorable stable state

Skipping state control is where things break.

* * *

## 3. Relationship to Other Specifications

* **EmbeddedX (umbrella):** https://github.com/telespial/EmbeddedX-Specs
* **MRD:** https://github.com/telespial/Machine-Readable-Datasheets-Specs
* **MRC:** https://github.com/telespial/Machine-Readable-Connectivity-Specs
* **MDP:** https://github.com/telespial/Model-Definition-Package-Specs
* **EIL:** https://github.com/telespial/Embedded-Intelligence-Layer-Specs
* **EIP:** https://github.com/telespial/Embedded-Intelligence-Package-Specs

* * *

## 4. Core Principle

AI-assisted coding should behave like a controlled engineering system, not a free-form text generator.

* * *

## License

See [LICENSE.md](./LICENSE.md)
