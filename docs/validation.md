# AICS Validation

## Validation as a Core Part of the AI Coding Loop

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS treats validation as part of generation rather than as a separate afterthought. A generated patch that cannot be compiled, tested, reviewed, or restored safely is incomplete.

* * *

## 1. Validation Categories

Validation may include:

* compile checks
* static analysis
* interface consistency checks
* dependency validation
* unit tests
* hardware-specific checks
* size and resource checks
* execution feedback
* state consistency checks

* * *

## 2. Validation Artifacts

Validation results should be preserved in visible forms such as:

* pass/fail reports
* error logs
* warning logs
* size deltas
* test summaries
* execution traces
* promotion or rollback notes

* * *

## 3. Role in the Loop

Validation should inform refinement, but should not hide the underlying evidence from the engineer.

* * *

## 4. Embedded Relevance

In embedded workflows, validation often carries more meaning than raw generated text because compile, memory, and interface failures may reveal issues not obvious from the code alone.
