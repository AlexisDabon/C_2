# LOGIC SERIES OF C PROGRAMMING

**Compilation:** `gcc -Wall -Wextra -Werror -pedantic -std=c11`

These C exercises cover various concepts across different levels of C programming.
These mini-programs are iterative and are saved through regular `git commit` commands.

## PROGRAMS BY ORDER

### I. `01_verif_code.c` (PIN Verification System)
Developed a lightweight authentication module in C that uses an error counter inside a `while` loop to track failed attempts. It validates the user input via `scanf` against a hardcoded PIN and triggers a `break` statement to grant access, or denies entry after 3 consecutive wrong inputs.

### II. `02_controle.c` (Access Control System)
Developed a modular access control system in C using `stdbool.h` for state management and strict `scanf` return validation to isolate I/O acquisition from verification logic. It enforces a strict lock-out mechanism via a `while` loop after 3 failed attempts and exits cleanly using standard system macros.

### III. `03_retrait.c` (ATM Withdrawal System)
Developed an authentication and withdrawal program in C using a `while` loop to limit PIN attempts to 3 before locking access. It evaluates withdrawal requests against a `#define` threshold using an `if-else` conditional block and processes valid transactions by calculating and displaying the updated balance in real time.

### IV. `04_caisse.c` (Cash Register System)
Developed a robust checkout simulation in C using `float` and strict `scanf` return validation to safely handle price entries. It systematically flushes the `stdin` buffer to prevent infinite loops on non-numeric inputs and maintains an accurate running total alongside the total item count.

### V. `05_atm.c` (ATM Simulator)
Developed a compact banking simulation in C using a `for` loop and strict `scanf` return validation to securely handle PIN authentication within 3 attempts. It relies on a `switch` statement to manage real-time balance operations including withdrawals and deposits and systematically flushes the `stdin` buffer to guarantee crash-free menu navigation.

---

## KEY CONCEPTS

* **`01_verif_code.c`**: Applied an attempt counter within a `while` loop to validate input via `scanf` against a hardcoded PIN, utilizing a `break` statement upon successful authentication.
* **`02_controle.c`**: Separated modular functions, using `stdbool.h` and custom buffer clearing to isolate input acquisition from verification logic and return standard system exit codes.
* **`03_retrait.c`**: Utilized a `while` loop to limit PIN authentication attempts and integrated an `if-else` conditional block.
* **`04_caisse.c`**: Implemented a `float` validation loop paired with systematic buffer flushing via `getchar()` to handle non-numeric inputs and maintain accurate cumulative totals.
* **`05_atm.c`**: Structured conditional balance arithmetic, a 3-attempt PIN counter via a `for` loop, and an interactive `switch` menu protected against invalid entries.

---

## Compilation and Execution

This project uses a Makefile to automate compilation under the C11 standard with strict compiler flags (`-Wall -Wextra -Werror -pedantic`).

```bash
# 1. Compile all exercises
make

# 2. Run a program
./01_verif_code

# 3. Clean binary files
make clean

# 4. Manual compilation (without Makefile)
gcc -Wall -Wextra -Werror -pedantic -std=c11 01_verif_code.c -o 01_verif_code
