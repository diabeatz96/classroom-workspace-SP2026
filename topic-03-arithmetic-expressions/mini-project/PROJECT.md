# Project: Tip Calculator

## Overview

You will create a tip calculator that computes the tip amount and total bill, with an option to split the bill among multiple people. This is a practical tool that demonstrates real-world arithmetic operations.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Perform arithmetic calculations with user input
- Handle floating-point arithmetic correctly
- Use appropriate data types for money calculations
- Format output for currency display

## Requirements

Your program must:

1. Ask the user for the bill amount (in dollars)
2. Ask for the tip percentage they want to leave
3. Ask how many people are splitting the bill
4. Calculate and display:
   - The tip amount
   - The total bill (bill + tip)
   - The amount each person pays (if splitting)

5. Handle decimal values correctly (bills are rarely whole numbers)
6. Display all money values with 2 decimal places

## Example Output

```
===== TIP CALCULATOR =====

Enter the bill amount: $45.67
Enter tip percentage: 18
How many people are splitting? 3

------------------------------
Bill Amount:     $45.67
Tip (18%):       $8.22
------------------------------
Total:           $53.89
------------------------------
Each person pays: $17.96
------------------------------
```

## Getting Started

1. **Identify the inputs:**
   - Bill amount (double)
   - Tip percentage (int or double)
   - Number of people (int)

2. **Plan the calculations:**
   - Tip = bill * (percentage / 100)
   - Total = bill + tip
   - Per person = total / people

3. **Consider edge cases:**
   - What if there is only 1 person? (Still valid, just no splitting)
   - What if the percentage is 0? (No tip, still valid)

## Hints

<details>
<summary>Hint 1: Calculating Tip Percentage</summary>

If the user enters 18 for 18%, you need to convert it:
```cpp
double tipAmount = billAmount * (tipPercent / 100.0);
```
Note the `100.0` to ensure floating-point division!
</details>

<details>
<summary>Hint 2: Formatting Currency</summary>

To display exactly 2 decimal places, add this at the top after includes:
```cpp
#include <iomanip>

// Then before your cout statements:
cout << fixed << setprecision(2);
```
All subsequent double outputs will show 2 decimal places.
</details>

<details>
<summary>Hint 3: Aligning Output</summary>

Use `setw()` from `<iomanip>` to align numbers:
```cpp
cout << setw(10) << total;  // Right-aligns in 10-character field
```
</details>

## Extensions (Optional)

1. **Suggested tips:** Show tip amounts for 15%, 18%, and 20%

2. **Rounding:** Round the per-person amount up to the nearest cent so the total is covered

3. **Rating-based tip:** Ask for a service rating (1-5) and suggest a tip percentage

4. **Tax inclusion:** Ask if tax should be calculated before or after tip

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Correctly reads all inputs | 20 |
| Calculates tip correctly | 20 |
| Calculates total correctly | 15 |
| Calculates per-person amount correctly | 15 |
| Output is formatted nicely | 15 |
| Uses appropriate data types | 10 |
| Code is well-organized with comments | 5 |
| **Total** | **100** |
