# AICS Validation Flow

## Ordering Validation Before Promotion

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

AICS should not treat all validation checks as one undifferentiated step. Ordering matters. Early checks should catch obvious failures before deeper promotion logic is considered.

* * *

## 1. Recommended Flow

1. scope check
2. structural check
3. compile check
4. lint and static analysis
5. dependency and interface check
6. test execution
7. size or resource check
8. state consistency check
9. review packaging
10. promotion decision

* * *

## 2. Reason for Ordering

This sequence reduces wasted effort. It is better to fail early on scope or compile issues than to collect deep reports for a change that was invalid from the beginning.

* * *

## 3. Promotion Barrier

Promotion should occur only after the project-defined minimum validation set is complete.
