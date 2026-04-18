# Control.Lamp.Api

`PiSubmarine.Control.Lamp.Api` defines the low-level lamp command vocabulary.

## Responsibility

`Command` represents the desired lamp intensity exposed to the rest of the control stack.

`IController` defines the low-level controller contract that accepts a lamp target.

The command stays separate from any internal lamp implementation concerns such as cooling or fan control.
