# AICS Architecture

## A Structured Control Architecture for AI-Assisted Coding

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS establishes a control-oriented architecture for AI-assisted coding where context, constraints, generation, validation, state control, and review remain distinct but connected. The architecture is intended to reduce drift, increase reviewability, and support more trustworthy code changes.

* * *

## 1. High-Level Flow

```text
User Intent / Task Request
            ↓
   Constraints + Project Context
            ↓
  AICS Generation / Modification
            ↓
 Visible Change Artifacts (diffs)
            ↓
Validation + Execution Feedback
            ↓
 State Promotion or Rollback
            ↓
   Engineer Review / Acceptance
```

* * *

## 2. Architectural Components

### 2.1 Task Intent Layer

Establishes what the engineer wants changed and what the expected scope should be.

### 2.2 Constraint Layer

Establishes file boundaries, interface rules, dependency limitations, performance limits, and project-specific restrictions.

### 2.3 Context Layer

Provides the code, specs, documentation, and related project state needed to generate a grounded result.

### 2.4 Generation Layer

Produces proposed changes in a structured and reviewable form.

### 2.5 Validation Layer

Runs checks such as compile, lint, interface, dependency, or test validation.

### 2.6 State Layer

Tracks golden, working, candidate, failsafe, and recovery states.

### 2.7 Review Layer

Presents artifacts to the engineer for final evaluation.

* * *

## 3. Design Rule

AICS is strongest when each component remains explicit instead of being hidden inside one large prompt.
