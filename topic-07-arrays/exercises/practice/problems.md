# Practice Problems: Arrays

Complete each problem in a separate `.cpp` file in the `solutions/` folder.

---

## Problem 1: Array Sum and Average
**Difficulty:** Easy

Write a program that:
1. Creates an array of 10 integers
2. Prompts the user to enter 10 numbers
3. Calculates and displays the sum
4. Calculates and displays the average

**Example:**
```
Enter 10 numbers:
5 10 15 20 25 30 35 40 45 50
Sum: 275
Average: 27.5
```

---

## Problem 2: Find Min and Max
**Difficulty:** Easy

Write a program that:
1. Creates an array of 6 integers initialized with values
2. Finds and displays the minimum value
3. Finds and displays the maximum value
4. Displays the indices where min and max were found

**Example:**
```
Array: 45 23 78 12 56 89
Minimum: 12 at index 3
Maximum: 89 at index 5
```

---

## Problem 3: Count Positive and Negative
**Difficulty:** Easy

Write a program that:
1. Prompts the user to enter 8 integers (can be positive, negative, or zero)
2. Counts how many are positive
3. Counts how many are negative
4. Counts how many are zero

**Example:**
```
Enter 8 integers: 5 -3 0 12 -7 0 8 -1
Positive numbers: 3
Negative numbers: 3
Zeros: 2
```

---

## Problem 4: Reverse Array
**Difficulty:** Medium

Write a program that:
1. Prompts the user to enter 5 numbers
2. Stores them in an array
3. Reverses the array IN PLACE (not just printing in reverse)
4. Displays the reversed array

**Hint:** Swap elements from both ends moving toward the center.

**Example:**
```
Enter 5 numbers: 10 20 30 40 50
Original: 10 20 30 40 50
Reversed: 50 40 30 20 10
```

---

## Problem 5: Search and Count
**Difficulty:** Medium

Write a program that:
1. Initializes an array with these values: {5, 2, 8, 5, 1, 9, 5, 3, 5, 7}
2. Prompts the user for a search value
3. Counts how many times that value appears
4. Lists ALL indices where the value was found

**Example:**
```
Array: 5 2 8 5 1 9 5 3 5 7
Enter value to search for: 5
5 appears 4 times
Found at indices: 0 3 6 8
```

---

## Problem 6: Array Statistics
**Difficulty:** Medium

Write a program that calculates statistics for test scores:
1. Prompt user for 7 test scores
2. Calculate the average
3. Count how many scores are above average
4. Count how many are below average
5. Count how many are exactly average

**Example:**
```
Enter 7 scores: 85 90 78 92 88 75 92
Average: 85.71
Above average: 4
Below average: 2
At average: 1
```

---

## Problem 7: Parallel Arrays (Challenge)
**Difficulty:** Hard

Create a simple inventory system using parallel arrays:
- One array for product names (strings)
- One array for quantities (integers)
- One array for prices (doubles)

The program should:
1. Store data for 4 products
2. Display all products in a formatted table
3. Calculate and display the total inventory value

**Example:**
```
Inventory:
Product         Qty     Price     Value
-----------------------------------------
Pencil          100     $0.50     $50.00
Notebook         50     $2.99    $149.50
Eraser           75     $0.75     $56.25
Pen              80     $1.25    $100.00
-----------------------------------------
Total Inventory Value: $355.75
```

---

## Submission Checklist
- [ ] Each solution compiles without errors
- [ ] Arrays are properly declared with const size
- [ ] No array out-of-bounds access
- [ ] Code is properly indented and readable
- [ ] Each solution includes sample output in comments
