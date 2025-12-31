# Project: Personal Stats Calculator

## Overview

You will create a program that collects personal information from the user and displays it as a formatted "profile card." This project practices variable declaration, reading different types of input, and producing formatted output.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Declare variables of appropriate data types
- Read user input using `cin` and `getline`
- Handle the newline buffer when mixing input methods
- Display formatted output combining text and variables

## Requirements

Your program must:

1. Collect the following information from the user:
   - Full name (may contain spaces)
   - Birth year (integer)
   - Height in inches (can be decimal)

2. Calculate and display:
   - The user's approximate age (use 2026 as the current year)
   - Height converted to feet and inches (e.g., 67 inches = 5 feet 7 inches)

3. Display all information in a nicely formatted profile card

4. Use appropriate data types for each piece of information

5. Include clear prompts so the user knows what to enter

## Example Output

```
===== Personal Stats Calculator =====

Enter your full name: Maria Rodriguez
Enter your birth year: 2004
Enter your height in inches: 64.5

========================================
           PROFILE CARD
========================================
Name:    Maria Rodriguez
Age:     22 years old
Height:  64.5 inches (5 ft 4 in)
========================================
```

## Getting Started

1. **Plan your variables.** What data types do you need for:
   - Full name?
   - Birth year?
   - Height?
   - Age (calculated)?
   - Feet and inches (calculated)?

2. **Handle input carefully.** Remember that `getline` and `cin >>` behave differently.

3. **Do the calculations.** You will need:
   - Age = 2026 - birth year
   - Feet = height / 12 (integer division)
   - Remaining inches = height - (feet * 12)

4. **Format the output.** Use tabs or spaces to align the information nicely.

## Hints

<details>
<summary>Hint 1: Input Order</summary>

If you use `getline` first, you do not need `cin.ignore()`. But if you use `cin >>` before `getline`, you must clear the buffer with `cin.ignore()`.
</details>

<details>
<summary>Hint 2: Integer Division</summary>

To get feet from inches, you need integer division. If height is a double, you can cast it:
```cpp
int feet = static_cast<int>(heightInInches) / 12;
```
Or you can use `int feet = height / 12;` which automatically truncates.
</details>

<details>
<summary>Hint 3: Remaining Inches</summary>

To get the remaining inches after calculating feet:
```cpp
int remainingInches = static_cast<int>(height) % 12;
```
Or for more accuracy with decimal heights:
```cpp
double remainingInches = height - (feet * 12);
```
</details>

## Extensions (Optional)

1. **Add more stats:** Include favorite color, hobby, or other personal information.

2. **Calculate BMI:** If you also ask for weight, you can calculate BMI (covered more in the next topic).

3. **Birth month:** Ask for birth month and determine if they have had their birthday this year yet for a more accurate age.

4. **Metric conversion:** Also display height in centimeters (1 inch = 2.54 cm).

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Collects all required input correctly | 25 |
| Uses appropriate data types | 20 |
| Calculates age correctly | 15 |
| Calculates feet/inches correctly | 15 |
| Output is well-formatted | 15 |
| Code is properly structured with comments | 10 |
| **Total** | **100** |
