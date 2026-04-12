# AICS Interoperability

## Relationship Between AICS and the EmbeddedX Stack

Proposed by: Richard Haberkern  
Contact: rmhaberkern@gmail.com

Free for evaluation. Commercial use requires permission. See license.md for more information.

* * *

## 1. MRD Relationship

AICS should treat MRD as hardware truth and avoid generating code that contradicts defined pin, register, interface, or errata information.

* * *

## 2. MDF Relationship

AICS should treat MDF as model truth and preserve model input, output, and runtime assumptions during code generation or integration.

* * *

## 3. EIL Relationship

AICS should preserve EIL boundaries when generating runtime intelligence integration code.

* * *

## 4. EmbeddedX Role

Within the broader EmbeddedX platform, AICS defines how AI is allowed to create or modify code around the surrounding structured layers.
