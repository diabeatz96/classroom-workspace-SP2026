# Project: Movie Ticket Pricing

## Overview

You will create a movie ticket pricing system that calculates the cost of tickets based on age, day of the week, showtime, and whether it is a 3D movie. This project demonstrates complex decision-making using multiple conditions.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Use if-else statements with multiple conditions
- Combine conditions using logical operators
- Handle multiple factors that affect an outcome
- Create clear, user-friendly output

## Requirements

Your program must determine ticket price based on:

1. **Age Category:**
   - Child (under 13): Base price $8.00
   - Adult (13-64): Base price $12.00
   - Senior (65+): Base price $9.00

2. **Day of Week:**
   - Tuesday: 50% off (discount day)
   - Weekend (Saturday/Sunday): $2.00 surcharge

3. **Showtime:**
   - Matinee (before 5 PM): $2.00 off
   - Regular: No adjustment

4. **3D Movie:**
   - 3D surcharge: $3.00

Your program should:
- Ask for age
- Ask for day of week (1-7, where 1=Monday)
- Ask for showtime (hour in 24-hour format, e.g., 14 for 2 PM)
- Ask if seeing a 3D movie (Y/N)
- Display the final ticket price with a breakdown

## Example Output

```
===== MOVIE TICKET PRICING =====

Enter your age: 25
Enter day of week (1=Mon, 7=Sun): 2
Enter showtime (24-hour, e.g., 14 for 2PM): 14
Is this a 3D movie? (Y/N): Y

----- TICKET BREAKDOWN -----
Base price (Adult):     $12.00
Tuesday discount:       -$6.00
Matinee discount:       -$2.00
3D surcharge:           +$3.00
----------------------------
TOTAL:                  $7.00
```

## Getting Started

1. **Plan the logic:** Draw a flowchart or outline showing all the decisions

2. **Start with base price:** Determine base price from age first

3. **Apply adjustments one by one:** Add/subtract for each factor

4. **Keep track of what was applied:** So you can show the breakdown

## Hints

<details>
<summary>Hint 1: Structure Your Conditions</summary>

Handle one factor at a time:
```cpp
// 1. Determine base price from age
if (age < 13) {
    basePrice = 8.00;
} else if (age >= 65) {
    // ...
}

// 2. Check for Tuesday discount
if (day == 2) {
    // Apply 50% off
}

// 3. Check for matinee
// 4. Check for 3D
// etc.
```
</details>

<details>
<summary>Hint 2: Weekend Check</summary>

For checking weekend:
```cpp
if (day == 6 || day == 7) {
    // It's Saturday or Sunday
}
```
</details>

<details>
<summary>Hint 3: Order of Operations</summary>

Apply the Tuesday discount to the base price before adding surcharges. Typically:
1. Start with base price
2. Apply percentage discounts (Tuesday)
3. Apply flat discounts (matinee)
4. Apply surcharges (weekend, 3D)
</details>

<details>
<summary>Hint 4: Tracking Adjustments</summary>

To show a breakdown, you might want separate variables:
```cpp
double tuesdayDiscount = 0;
double matineeDiscount = 0;
double weekendSurcharge = 0;
double threeDSurcharge = 0;

// Then calculate each and store
if (day == 2) {
    tuesdayDiscount = basePrice * 0.5;
}
```
</details>

## Extensions (Optional)

1. **Group discount:** 10% off for groups of 4 or more

2. **Loyalty member:** Ask if customer is a member, give additional 10% off

3. **Multiple tickets:** Allow purchasing multiple tickets with different ages

4. **Show time display:** Convert 24-hour time to 12-hour with AM/PM in output

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Correctly determines base price by age | 20 |
| Correctly applies Tuesday discount | 15 |
| Correctly applies matinee discount | 15 |
| Correctly applies weekend surcharge | 15 |
| Correctly applies 3D surcharge | 10 |
| Displays clear breakdown of pricing | 15 |
| Code is well-organized with comments | 10 |
| **Total** | **100** |
