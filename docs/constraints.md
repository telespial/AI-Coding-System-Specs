# AICS Constraints

## Boundary Rules for AI-Assisted Coding

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS treats constraints as first-class engineering inputs. AI systems should not rely on vague instructions alone when file scope, hardware requirements, API boundaries, and validation expectations can be described explicitly.

* * *

## 1. Constraint Types

AICS may operate under constraints such as:

* allowed file list
* forbidden file list
* allowed libraries
* forbidden libraries
* memory limits
* timing limits
* required interfaces
* forbidden functions
* project structure expectations
* review requirements
* state promotion requirements

* * *

## 2. Why Constraints Matter

Constraints reduce the chance that the system will:

* rewrite unrelated code
* break interfaces
* add unsupported dependencies
* violate embedded limits
* drift outside project intent

* * *

## 3. Embedded-Specific Constraints

For embedded projects, constraints may include:

* register access rules
* hardware initialization order
* ISR restrictions
* RTOS interaction rules
* memory allocation policy
* vendor HAL usage expectations
* code size budgets
* stack or heap budgets

* * *

## 4. Constraint Outcome

The goal is not to limit AI usefulness. The goal is to make AI output safer and easier to review.
