# Practice Problems: Searching and Sorting

Complete each problem in a separate `.cpp` file in the `solutions/` folder.

---

## Problem 1: Linear Search with Count
**Difficulty:** Easy

Write a program that:
1. Creates an array of 10 integers
2. Asks the user for a target value
3. Uses linear search to find the target
4. Counts how many comparisons were made
5. Reports whether found and the number of comparisons

**Example:**
```
Array: 5 12 8 3 19 7 15 2 11 6
Enter value to search for: 7
Found at index 5
Comparisons made: 6
```

---

## Problem 2: Binary Search Implementation
**Difficulty:** Easy

Write a program that:
1. Creates a sorted array of 15 integers
2. Asks the user for a target value
3. Implements binary search to find it
4. Displays each step (mid value checked)
5. Reports whether found and total comparisons

**Example:**
```
Sorted array: 2 5 8 11 14 17 20 23 26 29 32 35 38 41 44
Enter value to search for: 29
Step 1: Checking index 7 (value 23)
Step 2: Checking index 11 (value 35)
Step 3: Checking index 9 (value 29)
Found at index 9
Comparisons made: 3
```

---

## Problem 3: Selection Sort with Passes
**Difficulty:** Medium

Write a program that:
1. Takes 6 integers from the user
2. Implements selection sort
3. Displays the array after each pass
4. Shows which elements were swapped

**Example:**
```
Enter 6 numbers: 64 25 12 22 11 90
Pass 1: Swap 64 and 11 -> [11] 25 12 22 64 90
Pass 2: Swap 25 and 12 -> [11 12] 25 22 64 90
Pass 3: Swap 25 and 22 -> [11 12 22] 25 64 90
Pass 4: No swap needed -> [11 12 22 25] 64 90
Pass 5: No swap needed -> [11 12 22 25 64] 90
Sorted: 11 12 22 25 64 90
```

---

## Problem 4: Bubble Sort Optimized
**Difficulty:** Medium

Write a program that implements bubble sort with early termination:
1. Takes 7 integers from the user
2. Implements optimized bubble sort (stops if no swaps in a pass)
3. Shows each pass and how many swaps were made
4. Reports total passes needed

**Example:**
```
Enter 7 numbers: 1 3 2 4 5 6 7
Pass 1: 1 swap(s) made -> 1 2 3 4 5 6 7
Pass 2: 0 swap(s) made -> array is sorted!
Total passes: 2
Sorted: 1 2 3 4 5 6 7
```

---

## Problem 5: Search Comparison
**Difficulty:** Medium

Write a program that:
1. Creates an array of 20 sorted integers
2. Asks user for a target value
3. Searches using BOTH linear and binary search
4. Compares the number of comparisons made by each

**Example:**
```
Array: 3 7 11 15 19 23 27 31 35 39 43 47 51 55 59 63 67 71 75 79
Enter value to search for: 51
Linear search: Found at index 12 (13 comparisons)
Binary search: Found at index 12 (4 comparisons)
Binary search was 3.25x faster!
```

---

## Problem 6: Sort Descending
**Difficulty:** Medium

Modify selection sort to sort in descending order (largest to smallest):
1. Take 8 integers from user
2. Sort in descending order
3. Display the sorted result

**Example:**
```
Enter 8 numbers: 42 17 89 23 56 8 71 35
Sorted (descending): 89 71 56 42 35 23 17 8
```

---

## Problem 7: Find Second Largest (Challenge)
**Difficulty:** Hard

Write a program that finds the second largest element in an array:
1. Take array of 10 integers from user
2. Find the second largest WITHOUT fully sorting the array
3. Report both the largest and second largest

**Hint:** Track two values: largest and secondLargest

**Example:**
```
Enter 10 numbers: 45 23 78 12 56 89 34 67 90 21
Largest: 90
Second largest: 89
```

---

## Problem 8: Sorting Visualizer (Challenge)
**Difficulty:** Hard

Create a text-based visualization of bubble sort:
1. Use a small array (5-6 elements)
2. Show the array state after each comparison
3. Highlight which elements are being compared
4. Show when a swap occurs

**Example:**
```
Initial: [5] [3] [8] [1] [9]

Comparing [5] and [3]: SWAP
[3] [5] [8] [1] [9]

Comparing [5] and [8]: no swap
[3] [5] [8] [1] [9]

Comparing [8] and [1]: SWAP
[3] [5] [1] [8] [9]
...
```

---

## Submission Checklist
- [ ] Each solution compiles without errors
- [ ] Search functions return -1 when not found
- [ ] Binary search only used on sorted arrays
- [ ] Sorting algorithms correctly swap elements
- [ ] Code is properly indented and readable
- [ ] Each solution includes sample output in comments
