# AICS State Management

## Controlling the Lifecycle of Generated and Reviewed Code

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS treats project state as part of the coding system itself. Code generation without explicit state control leads to ambiguous recovery, unclear promotion rules, and fragile workflows. This document establishes the major state concepts and how they relate to generation and review.

* * *

## 1. State Categories

AICS should support at least the following logical states:

* **golden**
* **working**
* **candidate**
* **failsafe**
* **recovery**

* * *

## 2. Why State Matters

State separation helps prevent:

* accidental loss of known-good code
* promotion of unvalidated output
* confusion between active work and stable baselines
* recovery failure after bad iterations

* * *

## 3. State Intent

### Golden

Known good promoted baseline. This is the reference state for trusted behavior.

### Working

Current editable state used for active engineering and iterative development.

### Candidate

Newly generated or modified output pending validation and review.

### Failsafe

Emergency fallback state that can be restored quickly when active work becomes unstable.

### Recovery

Most recent restorable stable state retained for rollback convenience.

* * *

## 4. State Discipline

AICS should make state transitions explicit. A candidate should not silently become golden. A working state should not silently overwrite a failsafe. Stable code should be promoted intentionally.
