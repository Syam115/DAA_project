# ♟️ N-Queens Problem — Backtracking Algorithm (C++)

## 📌 Project Description
This project implements the **N-Queens problem** using the **backtracking algorithm** in **C++** with a **Command Line Interface (CLI)**.

The N-Queens problem involves placing **N queens on an N×N chessboard** such that **no two queens attack each other**:

- No two queens share the same **row**
- No two queens share the same **column**
- No two queens share the same **diagonal**

The program takes the value of **N** as input from the user, computes **all valid solutions**, and prints each solution directly to the terminal using an intuitive board representation.

---

## 🛠️ Technologies Used
- **Language:** C++
- **Paradigm:** Backtracking / Recursion
- **Interface:** Command Line Interface (CLI)
- **Compiler:** g++ (MinGW / GCC)

---

## ⚙️ Algorithm Used
The solution uses the **Backtracking technique**.

### Key Steps:
1. Place a queen in a safe column of the current row.
2. Recursively move to the next row.
3. If no safe position exists, **backtrack** to the previous row.
4. Continue until all solutions are explored.

This ensures that **only valid board configurations** are generated.

---

## ⏱️ Time and Space Complexity
- **Time Complexity:**  
  **O(N!)**
- **Space Complexity:**  
  **O(N²)**

---

## 📤 Program Output (Terminal Screenshot Representation)

```text
Enter value of N: 4

Total Solutions = 2

Solution 1:
.Q..
...Q
Q...
..Q.

Solution 2:
..Q.
Q...
...Q
.Q..

---

## 📌 Applications
- **Scheduling problems** – conflict-free task and resource allocation
- **VLSI design** – placement of components with minimal interference
- **Artificial Intelligence** – constraint satisfaction problems (CSPs)
- **Robotics** – constraint-based path planning
