# Practice Problems: Strings and 2D Arrays

Complete each problem in a separate `.cpp` file in the `solutions/` folder.

---

## Problem 1: Character Counter
**Difficulty:** Easy

Write a program that counts the number of:
- Letters (a-z, A-Z)
- Digits (0-9)
- Spaces
- Other characters

**Requirements:**
- Use `getline` to read the entire line
- Use character functions from `<cctype>`

**Example:**
```
Enter a string: Hello World! 123
Letters: 10
Digits: 3
Spaces: 2
Other: 1
```

---

## Problem 2: Vowel Remover
**Difficulty:** Easy

Write a program that removes all vowels (a, e, i, o, u - both cases) from a string.

**Requirements:**
- Create a new string without vowels
- Display both original and modified strings

**Example:**
```
Enter a string: Hello World
Original: Hello World
Without vowels: Hll Wrld
```

---

## Problem 3: String Reversal
**Difficulty:** Medium

Write a program that reverses a string two ways:
1. Create a reversed copy
2. Reverse in place (modify the original)

**Requirements:**
- Show both methods
- Use loops, not built-in reverse functions

**Example:**
```
Enter a string: Programming
Original: Programming
Reversed (copy): gnimmargorP
Reversed (in-place): gnimmargorP
```

---

## Problem 4: Word Counter
**Difficulty:** Medium

Write a program that counts the number of words in a sentence.

**Requirements:**
- Handle multiple spaces between words
- Handle leading/trailing spaces
- A word is a sequence of non-space characters

**Example:**
```
Enter a sentence:   Hello   World  Test
Word count: 3
```

---

## Problem 5: 2D Array Row and Column Sum
**Difficulty:** Medium

Write a program that:
1. Creates a 3x4 grid of integers (you can initialize or prompt user)
2. Displays the grid
3. Calculates and displays the sum of each row
4. Calculates and displays the sum of each column
5. Calculates the grand total

**Example:**
```
Grid:
  1   2   3   4
  5   6   7   8
  9  10  11  12

Row sums: 10, 26, 42
Column sums: 15, 18, 21, 24
Grand total: 78
```

---

## Problem 6: Matrix Transpose
**Difficulty:** Medium

Write a program that transposes a matrix (swaps rows and columns).

**Requirements:**
- Use a 3x3 matrix for simplicity
- Display original and transposed matrix

**Example:**
```
Original:
1 2 3
4 5 6
7 8 9

Transposed:
1 4 7
2 5 8
3 6 9
```

---

## Problem 7: Tic-Tac-Toe Board (Challenge)
**Difficulty:** Hard

Create a program that:
1. Uses a 3x3 2D char array for the board
2. Displays the board with grid lines
3. Allows two players to take turns placing X and O
4. Detects when someone wins (3 in a row, column, or diagonal)
5. Detects a tie (board full, no winner)

**Example:**
```
   1   2   3
 +---+---+---+
1| X |   |   |
 +---+---+---+
2|   | O |   |
 +---+---+---+
3|   |   |   |
 +---+---+---+

Player X, enter row and column: 2 1

   1   2   3
 +---+---+---+
1| X |   |   |
 +---+---+---+
2| X | O |   |
 +---+---+---+
3|   |   |   |
 +---+---+---+
```

---

## Submission Checklist
- [ ] Each solution compiles without errors
- [ ] Strings properly handle edge cases (empty, spaces)
- [ ] 2D arrays use proper row/column indexing
- [ ] Code is properly indented and readable
- [ ] Each solution includes sample output in comments
