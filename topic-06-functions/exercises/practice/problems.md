# Practice Problems: Functions

Complete each problem in a separate `.cpp` file in the `solutions/` folder.

---

## Problem 1: Absolute Value
**Difficulty:** Easy

Write a function called `absoluteValue` that takes an integer and returns its absolute value (positive version).

**Requirements:**
- Function prototype: `int absoluteValue(int n);`
- If the number is negative, return its positive version
- If the number is positive or zero, return it unchanged
- Do NOT use the built-in `abs()` function

**Example:**
```
absoluteValue(-5)  returns 5
absoluteValue(3)   returns 3
absoluteValue(0)   returns 0
```

---

## Problem 2: Is Vowel
**Difficulty:** Easy

Write a function called `isVowel` that takes a character and returns `true` if it is a vowel, `false` otherwise.

**Requirements:**
- Function prototype: `bool isVowel(char c);`
- Check for both uppercase and lowercase vowels (a, e, i, o, u)
- Return a boolean value

**Example:**
```
isVowel('a')  returns true
isVowel('E')  returns true
isVowel('b')  returns false
```

---

## Problem 3: Power Function
**Difficulty:** Medium

Write a function called `power` that calculates base raised to the exponent power.

**Requirements:**
- Function prototype: `int power(int base, int exponent);`
- Assume exponent is non-negative (>= 0)
- Remember: any number to the power of 0 is 1
- Do NOT use the built-in `pow()` function

**Example:**
```
power(2, 3)   returns 8
power(5, 2)   returns 25
power(3, 0)   returns 1
```

---

## Problem 4: Count Digits
**Difficulty:** Medium

Write a function called `countDigits` that returns the number of digits in a positive integer.

**Requirements:**
- Function prototype: `int countDigits(int n);`
- Handle positive numbers only
- The number 0 has 1 digit

**Example:**
```
countDigits(12345)  returns 5
countDigits(7)      returns 1
countDigits(100)    returns 3
```

---

## Problem 5: Circle Calculator
**Difficulty:** Medium

Write two functions to work with circles:
1. `circleArea` - calculates the area of a circle given its radius
2. `circleCircumference` - calculates the circumference of a circle given its radius

**Requirements:**
- Function prototypes:
  - `double circleArea(double radius);`
  - `double circleCircumference(double radius);`
- Use 3.14159 for PI (or define it as a constant)
- Area formula: PI * r * r
- Circumference formula: 2 * PI * r

**Main program should:**
- Prompt user for a radius
- Display both the area and circumference

---

## Problem 6: Grade Calculator
**Difficulty:** Medium

Write a function called `getLetterGrade` that takes a numeric score and returns the letter grade as a character.

**Requirements:**
- Function prototype: `char getLetterGrade(int score);`
- Grading scale:
  - 90-100: 'A'
  - 80-89: 'B'
  - 70-79: 'C'
  - 60-69: 'D'
  - Below 60: 'F'

**Main program should:**
- Prompt user for multiple scores (use a loop)
- Display the letter grade for each
- Allow user to enter -1 to quit

---

## Problem 7: Number Analyzer (Challenge)
**Difficulty:** Hard

Create a program with multiple functions that work together to analyze a number:

**Required functions:**
1. `bool isEven(int n)` - returns true if n is even
2. `bool isPrime(int n)` - returns true if n is prime
3. `int sumOfDigits(int n)` - returns the sum of all digits
4. `void analyzeNumber(int n)` - calls the other functions and displays results

**Main program should:**
- Prompt user for a number
- Call `analyzeNumber` to display all information

**Example output for input 17:**
```
Analyzing: 17
Even: No
Prime: Yes
Sum of digits: 8
```

---

## Submission Checklist
- [ ] Each solution compiles without errors
- [ ] Each solution uses proper function prototypes
- [ ] Functions are defined after main()
- [ ] Code is properly indented and readable
- [ ] Each solution includes sample output in comments
