# LOGIC SERIES OF C PROGRAMING:

* Compilation: gcc -Wall -Wextra -Werror -pedantic -std=c11

* These C exercises cover various concepts across different levels of C programming.
* These mini-programs are iterative and are saved through regular 'git commit' commands.

## PROGRAMS BY ORDER

### I: caisse.c (Cash Register System)

Developed a robust checkout simulation in C using 'float' and strict 'scanf' return validation to safely handle price entries. It systematically flushes the 'stdin' buffer to prevent infinite loops on non-numeric inputs' and maintains an accurate running total alongside the total item count.

### II: atm.c (ATM Simulator)

Developed a compact banking simulation in C using a 'for' loop and strict 'scanf' return validation to securely handle PIN authentication within 3 attempts. It relies on a 'switch' statement to manage real-time balance operations including withdrawals and deposits  and systematically flushes the 'stdin' buffer to guarantee crash-free menu navigation.

### III: controle.c (Access Control System)

Developed a modular access control system in C using 'stdbool.h' for state management and strict 'scanf' return validation to isolate I/O acquisition from verification logic. 'It enforces a strict lock-out mechanism via a 'while' loop after 3 failed attempts' and exits cleanly using standard system macros.

### IV: retrait.c (ATM Withdrawal System)

Developed an authentication and withdrawal program in C using a 'while' loop to limit PIN attempts to 3 before locking access. It evaluates withdrawal requests against a define using an 'if-else' conditional block and processes valid transactions by calculating and displaying the updated balance in real time.

### V: verif code (Verification system)

Developed a lightweight authentication module in C that uses an erreur counter inside a 'while' loop to track failed attempts.It validates the user input via 'scanf' against a hardcoded PIN and triggers a 'break' statement to grant access, or denies entry after 3 consecutive wrong inputs.

## KEY CONCEPTS

* caisse.c: Implemented a 'float' validation loop paired with systematic buffer flushing via 'getchar' to handle non-numeric inputs and maintain accurate cumulative totals.

* atm.c: Structured conditional balance arithmetic, a 3-attempt PIN counter via a 'for' loop, and an interactive 'switch' menu protected against invalid entries.

* controle.c: Separated modular functions, using 'stdbool.h' and custom buffer clearing to isolate input acquisition from verification logic and return standard system exit codes.

* retrait.c: Utilized a 'while' loop to limit PIN authentication attempts and integrated an 'if-else' conditional block.

* verif code.c: Applied an attempt counter within a 'while' loop to validate input via 'scanf' against a hardcoded PIN, utilizing a 'break' statement upon successful authentication.

