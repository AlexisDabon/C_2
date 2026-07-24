# REFACTORING C2 IN PROGRESS

* **C2** is currently undergoing refactoring.

## PROGRAMS LIST:

### I: caisse.c

Robust input validation by restricting accepted values to positive floats. It effectively handles non-numeric character types, prevents infinite loops by clearing the stdin buffer after any input error, and maintains an accurate running total of all items.

### II: atm.c

A compact C-based ATM application featuring PIN authentication with attempt limits and interactive balance management.
It includes robust buffer handling for input validation and optimized conditional logic for seamless operations.
