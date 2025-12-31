# Project: Student Roster Manager

## Overview

You will create a student roster management system that can store student names and scores, search for students, sort the roster, and display top performers. This capstone project combines arrays, functions, searching, and sorting.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Use parallel arrays to manage related data
- Implement search algorithms
- Implement sorting algorithms
- Extract and filter data based on criteria

## Requirements

Your program must:

1. Store student names (strings) and scores (integers) in parallel arrays (up to 20 students)
2. Provide a menu with these options:
   - Add a student
   - Display all students
   - Search for a student by name
   - Sort by score (highest first)
   - Sort alphabetically by name
   - Display top N students
   - Exit

## Example Output

```
===== STUDENT ROSTER MANAGER =====

1. Add student
2. Display all students
3. Search by name
4. Sort by score
5. Sort by name
6. Show top N students
7. Exit

Choice: 1
Enter name: Alice
Enter score: 92
Student added!

Choice: 1
Enter name: Bob
Enter score: 85
Student added!

Choice: 2
----- ALL STUDENTS -----
1. Alice - 92
2. Bob - 85

Choice: 4
Sorted by score (highest first)!

Choice: 2
----- ALL STUDENTS -----
1. Alice - 92
2. Bob - 85

Choice: 6
How many top students? 1
----- TOP 1 STUDENTS -----
1. Alice - 92
```

## Required Functions

Implement at least these functions:
- `void addStudent(...)` - Add a new student
- `void displayAll(...)` - Show all students
- `int searchByName(...)` - Linear search, return index or -1
- `void sortByScore(...)` - Selection or bubble sort
- `void sortByName(...)` - Selection or bubble sort

## Hints

<details>
<summary>Hint 1: Parallel Arrays</summary>

```cpp
const int MAX = 20;
string names[MAX];
int scores[MAX];
int count = 0;  // Current number of students
```
</details>

<details>
<summary>Hint 2: Swapping Parallel Arrays</summary>

When sorting, swap both arrays together:
```cpp
// Swap names
string tempName = names[i];
names[i] = names[j];
names[j] = tempName;

// Swap scores
int tempScore = scores[i];
scores[i] = scores[j];
scores[j] = tempScore;
```
</details>

## Extensions (Optional)

1. **Delete student:** Remove a student from the roster
2. **Calculate class average:** Display the average score
3. **Grade distribution:** Show how many A's, B's, etc.
4. **Binary search:** After sorting by name, implement binary search

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Add and display students work | 20 |
| Search by name works | 15 |
| Sort by score works | 15 |
| Sort by name works | 15 |
| Top N display works | 15 |
| Menu system is complete | 10 |
| Code organization | 10 |
| **Total** | **100** |
