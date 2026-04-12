# AICS Rollback

## Rules for Safe Reversal of AI-Assisted Changes

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

Rollback is part of the AICS control model. A system that can generate changes but cannot safely reverse them is incomplete. This document establishes rollback expectations.

* * *

## 1. Rollback Triggers

Rollback may be triggered by:

* validation failure
* unexpected dependency change
* interface breakage
* memory or size regression
* runtime instability
* engineer rejection
* incomplete or inconsistent generated state

* * *

## 2. Rollback Targets

Rollback may restore:

* candidate → working
* candidate → recovery
* working → failsafe
* working → golden

The exact policy may depend on project rules.

* * *

## 3. Rollback Requirement

Rollback should be fast, visible, and repeatable. The system should make it obvious what state is being restored and why.

* * *

## 4. Embedded Relevance

In embedded work, a bad change can break build behavior, hardware bring-up, resource limits, or timing assumptions. Rollback is therefore part of normal engineering hygiene, not an edge case.
