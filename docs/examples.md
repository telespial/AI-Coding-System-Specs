# AICS Examples

## Representative Use Cases for a Structured AI Coding System

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## 1. Small Driver Patch

AICS receives a request to modify one driver function, is limited to one file, proposes a unified diff, runs compile checks, and presents the result with visible validation output.

* * *

## 2. Model Integration Support

AICS receives model metadata from MDF and runtime expectations from EIL, generates integration scaffolding, and verifies that expected interfaces remain intact.

* * *

## 3. Hardware-Aware Bring-Up

AICS uses MRD-derived constraints to prevent invalid peripheral initialization or unsupported pin configuration.

* * *

## 4. Controlled Refactor

AICS applies a targeted refactor inside an allowed file list while preserving tests and interface compatibility.

* * *

## 5. Recovery-Oriented Iteration

AICS generates a candidate patch, fails validation, records the failure, and restores the project to recovery without losing the trusted working state.
