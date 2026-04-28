# Fix My Code Challenge

This repository contains solutions for debugging and fixing broken code across multiple programming languages as part of the Holberton School **Fix My Code Challenge**.

---


## 🛠 Tasks

### 0. FizzBuzz (Python)
- Fixed incorrect condition order.
- Ensured `FizzBuzz` prints for multiples of both 3 and 5.
- Removed trailing spaces.

### 1. Print Square (JavaScript)
- Fixed incorrect string construction.
- Ensured correct output size using loops or `repeat()`.

### 2. Sort (Ruby)
- Fixed sorting logic for numeric arguments.
- Ignored non-numeric values.
- Converted inputs to integers before sorting.

### 3. User Password (Python)
- Fixed password validation logic.
- Implemented hashing for secure password storage and comparison.

### 4. Double Linked List (C)
- Fixed deletion logic for a node at a given index.
- Correctly updated pointers:
  - `prev->next`
  - `next->prev`
- Prevented double free error by preserving the original head pointer.

---

## ⚙️ Compilation (Task 4)

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 \
main.c free_dlistint.c print_dlistint.c \
add_dnodeint_end.c delete_dnodeint_at_index.c -o delete_dnodeint

##  Author

**Rateel**
