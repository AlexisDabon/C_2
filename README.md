# LOGIC SERIES OF C PROGRAMING:

* These C exercises cover various concepts across different levels of C programming.
* These mini-programs are iterative and are saved through regular 'git commit' commands.

## PROGRAMS BY ORDER

### I: caisse.c (Cash Register System)

A robust checkout simulation that validates item prices by restricting inputs to positive floats. It prevents infinite loop crashes on non-numeric characters by systematically flushing the stdin buffer and maintains an accurate running total alongside the total item count.

### II: atm.c (ATM Simulator)

A compact banking application featuring secure PIN authentication restricted to 3 attempts. It integrates full balance management—including deposits and withdrawals with sufficient fund verification—and uses strict input buffer clearing to guarantee stable navigation through its interactive menu.

### III: controle.c (Access Control System)

A secure access control system built with modular architecture, separating I/O acquisition from PIN verification. It enforces strict type checks, utilizes stdbool.h for state management, locks out after 3 failed attempts, and handles standard system exit codes (EXIT SUCCESS and EXIT FAILURE).

## KEY CONCEPTS

* caisse.c: Implemented a float validation loop paired with buffer flushing to handle bad inputs and track cumulative totals.
* atm.c: Used conditional balance arithmetic, attempt counting, and interactive switch-case menus protected against invalid entries.
* controle.c: Separated logic into dedicated.
