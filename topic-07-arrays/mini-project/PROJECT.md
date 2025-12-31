# Project: Grade Tracker

## Overview

You will create a grade tracking program that stores quiz scores in an array, calculates statistics, and provides analysis. This project demonstrates practical array manipulation.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Store and retrieve data in arrays
- Traverse arrays to compute statistics
- Use arrays with functions
- Implement common array algorithms

## Requirements

Your program must:

1. Store up to 10 quiz scores in an array
2. Allow the user to enter scores until they enter -1 or reach 10
3. Calculate and display:
   - The number of scores entered
   - The sum of all scores
   - The average score
   - The highest score
   - The lowest score
   - How many scores are above average

4. Display all scores in a formatted list

## Example Output

```
===== GRADE TRACKER =====

Enter quiz scores (enter -1 when done, max 10):
Score 1: 85
Score 2: 92
Score 3: 78
Score 4: 95
Score 5: 88
Score 6: -1

----- GRADE REPORT -----
Scores entered: 5

All scores: 85 92 78 95 88

Statistics:
  Sum:     438
  Average: 87.6
  Highest: 95
  Lowest:  78

Scores above average: 2
```

## Getting Started

1. **Declare an array** with size 10 and a counter for actual entries
2. **Input loop:** Read scores until -1 or array is full
3. **Calculate statistics:** Sum, average, max, min
4. **Count above average:** Compare each score to the average

## Hints

<details>
<summary>Hint 1: Finding Max and Min</summary>

```cpp
int max = scores[0];
int min = scores[0];

for (int i = 1; i < count; i++) {
    if (scores[i] > max) max = scores[i];
    if (scores[i] < min) min = scores[i];
}
```
</details>

<details>
<summary>Hint 2: Counting Above Average</summary>

```cpp
int aboveAverage = 0;
for (int i = 0; i < count; i++) {
    if (scores[i] > average) {
        aboveAverage++;
    }
}
```
</details>

## Extensions (Optional)

1. **Letter grades:** Show how many A's, B's, C's, etc.
2. **Drop lowest:** Calculate average without the lowest score
3. **Sort scores:** Display scores in order from lowest to highest

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Correctly reads and stores scores | 20 |
| Calculates sum and average | 20 |
| Finds highest and lowest | 20 |
| Counts above average | 15 |
| Displays formatted output | 15 |
| Code organization | 10 |
| **Total** | **100** |
