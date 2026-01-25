# Practice Problems - Topic 01: Output

Write complete C++ programs from scratch for each problem. Test your solutions by compiling and running them.

---

## Problem 1: Simple Message (Basic)

Write a program that displays the following output exactly:

```
Programming is fun!
C++ is my first language.
```

**Requirements:**
- Use two separate `cout` statements
- Each line should end with a newline

---

## Problem 2: Personal Introduction (Basic)

Write a program that displays a three-line introduction about yourself:
- Your name
- Your major or intended field of study
- One hobby or interest

**Example Output:**
```
My name is Alex.
I am studying Computer Science.
I enjoy playing video games.
```

---

## Problem 3: Simple Box (Basic)

Write a program that displays this exact box:

```
*****
*   *
*****
```

**Requirements:**
- Use exactly 5 asterisks for the top and bottom
- The middle row has asterisks on the sides with 3 spaces between

---

## Problem 4: Contact Card (Intermediate)

Write a program that displays a formatted contact card using tabs for alignment:

```
==============================
        CONTACT CARD
==============================
Name:           Jane Doe
Phone:          555-123-4567
Email:          jane@email.com
==============================
```

**Requirements:**
- Use tab characters (`\t`) for alignment
- Use equals signs for borders
- The header should be roughly centered

---

## Problem 5: Movie Quote (Intermediate)

Write a program that displays the following movie quote, including the quotation marks:

```
Famous Movie Quotes:

"May the Force be with you." - Star Wars
"I'll be back." - The Terminator
"Here's looking at you, kid." - Casablanca
```

**Requirements:**
- Include the actual quotation marks in the output
- There should be a blank line after "Famous Movie Quotes:"

---

## Problem 6: File Paths (Intermediate)

Write a program that displays Windows file paths correctly:

```
Common Windows Paths:
C:\Users\Public\Documents
C:\Program Files\Application
C:\Windows\System32
```

**Requirements:**
- All backslashes must display correctly
- Use proper escape sequences

---

## Problem 7: Receipt (Challenging)

Write a program that displays a store receipt:

```
+----------------------------------+
|         QUICK MART               |
|       123 Main Street            |
+----------------------------------+
| Item              Qty    Price   |
| -------------------------------- |
| Milk              1      $3.99   |
| Bread             2      $5.98   |
| Eggs              1      $4.50   |
| -------------------------------- |
| TOTAL                    $14.47  |
+----------------------------------+
|     Thank you for shopping!      |
+----------------------------------+
```

**Requirements:**
- Use tabs or spaces for column alignment
- Make the borders line up consistently
- Pay attention to spacing inside each line

---

## Problem 8: ASCII Art House (Challenging)

Write a program that displays a house using ASCII characters:

```
    /\
   /  \
  /    \
 /______\
|        |
|  [][]  |
|   __   |
|__|  |__|
```

**Requirements:**
- The roof should be triangular
- Include two windows (represented by `[]`)
- Include a door at the bottom

---

## Problem 9: Course Schedule (Challenging)

Create a program that displays a weekly course schedule using tabs for formatting:

```
==============================================
           WEEKLY CLASS SCHEDULE
==============================================
Day         Time            Course
----------------------------------------------
Monday      9:00 AM         CSC 126
Monday      2:00 PM         ENG 101
Wednesday   9:00 AM         CSC 126
Wednesday   11:00 AM        MTH 121
Friday      9:00 AM         CSC 126
==============================================
```

**Requirements:**
- Use tabs for consistent column alignment
- Include a header and footer made of equals signs
- Use dashes to separate the header from the data

---

## Problem 10: Formatted Price List (Intermediate - iomanip)

Write a program using `iomanip` to display a formatted price list:

```
=====================================
         ELECTRONICS STORE
=====================================
Product              Price      Stock
-------------------------------------
Laptop            $899.99         15
Mouse              $24.50         42
Keyboard           $75.00         28
Monitor           $299.95         10
-------------------------------------
```

**Requirements:**
- Use `#include <iomanip>` for formatting
- Use `setw()` to create aligned columns
- Use `fixed` and `setprecision(2)` for prices
- Use `left` alignment for product names
- Use `right` alignment for prices and stock numbers

---

## Problem 11: Grade Report (Intermediate - iomanip)

Write a program that displays a student grade report with proper decimal formatting:

```
========================================
          SEMESTER GRADE REPORT
========================================
Student: Alex Johnson       ID: 12345

Subject              Grade    Credits
----------------------------------------
Introduction to C++   92.50        3
Calculus I            87.00        4
English Composition   95.75        3
Physics               88.25        4
----------------------------------------
Semester GPA:         3.52
Total Credits:          14
========================================
```

**Requirements:**
- Use `fixed` and `setprecision(2)` for grades
- Use `setprecision(2)` for the GPA
- Use `setw()` to align all columns properly
- Grades should show exactly 2 decimal places (87.00 not 87)

---

## Problem 12: Professional Invoice (Challenging - iomanip)

Write a program that creates a professional-looking invoice using `setfill`:

```
============================================
              ABC CONSULTING
         Professional Services Invoice
============================================
Invoice #: INV-00042       Date: 01/15/2026

Description                      Amount
--------------------------------------------
Website Design...............   $1,500.00
Database Setup...............     $750.00
Training (5 hours)...........     $375.00
--------------------------------------------
                    Subtotal:   $2,625.00
                    Tax (8%):     $210.00
============================================
                       TOTAL:   $2,835.00
============================================

        Thank you for your business!
```

**Requirements:**
- Use `setfill('.')` to create the dotted lines between descriptions and amounts
- Use `setfill('-')` or `setfill('=')` for separator lines
- Use `fixed` and `setprecision(2)` for all money amounts
- Align descriptions to the left and amounts to the right
- Reset `setfill(' ')` when needed for proper spacing

---

## Submission Guidelines

For each problem:
1. Create a new file named `prob1.cpp`, `prob2.cpp`, etc.
2. Include a comment header with your name and the problem number
3. Compile and run to verify your output matches exactly
4. Check that your code follows the style guide

## Self-Check Questions

Before submitting, verify:
- [ ] Does my program compile without errors?
- [ ] Does my output match the expected output exactly?
- [ ] Did I use the required techniques (tabs, escape sequences, etc.)?
- [ ] Is my code properly indented and formatted?
- [ ] Did I include comments where helpful?
