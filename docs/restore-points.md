# AICS Restore Points

## Golden, Failsafe, and Other Recovery Anchors

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## Abstract

Restore points are not optional decoration in AICS. They are part of the control system. This document establishes the meaning of golden, failsafe, recovery, working, and candidate restore anchors.

* * *

## 1. Golden State

The golden state is the most trusted promoted baseline.

Recommended characteristics:

* validated
* reviewed
* intentionally promoted
* suitable as a clean restart point

* * *

## 2. Failsafe State

The failsafe state is the emergency rollback point.

Recommended characteristics:

* fast to restore
* protected from casual overwrite
* close enough to golden to be safe
* available even when recent work is unstable

* * *

## 3. Recovery State

The recovery state is the most recent restorable stable checkpoint.

Recommended characteristics:

* easier to create than a golden state
* useful for short rollback windows
* suitable for restoring after failed candidate runs

* * *

## 4. Candidate State

The candidate state should contain pending generated or modified output that has not yet been promoted.

* * *

## 5. Working State

The working state reflects active human or AI-assisted editing activity.

* * *

## 6. Practical Rule

Golden is the clean baseline. Failsafe is the emergency shield. Recovery is the practical rollback point. Candidate is what still needs proof. Working is where active change happens.
