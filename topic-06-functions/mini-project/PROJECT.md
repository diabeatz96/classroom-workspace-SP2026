# Project: Password Strength Checker

## Overview

You will create a password strength checker that validates passwords against multiple criteria. Each validation check will be implemented as a separate function, demonstrating modular program design.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Break a problem into separate functions
- Write functions that return boolean values
- Use functions to organize code logically
- Pass strings to functions
- Combine function results in main logic

## Requirements

Your program must check passwords for:

1. **Length:** At least 8 characters
2. **Uppercase:** Contains at least one uppercase letter (A-Z)
3. **Lowercase:** Contains at least one lowercase letter (a-z)
4. **Digit:** Contains at least one digit (0-9)
5. **Special Character:** Contains at least one special character (!@#$%^&*()-_=+)

Create separate functions for each check:
- `bool hasMinLength(string password)`
- `bool hasUppercase(string password)`
- `bool hasLowercase(string password)`
- `bool hasDigit(string password)`
- `bool hasSpecialChar(string password)`

The main function should:
1. Ask the user for a password
2. Call each checking function
3. Display which requirements are met/not met
4. Give an overall strength rating (Weak/Medium/Strong)

## Example Output

```
===== PASSWORD STRENGTH CHECKER =====

Enter a password: Hello123

Checking password requirements:
[X] At least 8 characters
[X] Contains uppercase letter
[X] Contains lowercase letter
[X] Contains digit
[ ] Contains special character

Requirements met: 4/5
Password Strength: MEDIUM

-----

Enter a password: MyP@ss123

Checking password requirements:
[X] At least 8 characters
[X] Contains uppercase letter
[X] Contains lowercase letter
[X] Contains digit
[X] Contains special character

Requirements met: 5/5
Password Strength: STRONG
```

## Strength Ratings

- **WEAK:** 0-2 requirements met
- **MEDIUM:** 3-4 requirements met
- **STRONG:** All 5 requirements met

## Getting Started

1. **Start with hasMinLength:** This is the simplest function
```cpp
bool hasMinLength(string password) {
    return password.length() >= 8;
}
```

2. **For character checks,** loop through each character:
```cpp
bool hasUppercase(string password) {
    for (int i = 0; i < password.length(); i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            return true;
        }
    }
    return false;
}
```

3. **In main,** call all functions and count how many return true

## Hints

<details>
<summary>Hint 1: Checking Character Types</summary>

You can compare characters directly:
```cpp
if (ch >= 'a' && ch <= 'z')  // lowercase
if (ch >= 'A' && ch <= 'Z')  // uppercase
if (ch >= '0' && ch <= '9')  // digit
```

Or use library functions (include `<cctype>`):
```cpp
if (islower(ch))  // lowercase
if (isupper(ch))  // uppercase
if (isdigit(ch))  // digit
```
</details>

<details>
<summary>Hint 2: Special Characters</summary>

```cpp
bool hasSpecialChar(string password) {
    string special = "!@#$%^&*()-_=+";

    for (int i = 0; i < password.length(); i++) {
        for (int j = 0; j < special.length(); j++) {
            if (password[i] == special[j]) {
                return true;
            }
        }
    }
    return false;
}
```
</details>

<details>
<summary>Hint 3: Counting Requirements</summary>

```cpp
int count = 0;

if (hasMinLength(password)) count++;
if (hasUppercase(password)) count++;
// ... etc
```
</details>

## Extensions (Optional)

1. **Common password check:** Reject passwords like "password", "12345678"

2. **No repeated characters:** Deduct points for "aaa" or "111"

3. **Password generator:** Offer to generate a strong password

4. **Hide password input:** Use a library to mask input with asterisks

## Grading Criteria

| Criteria | Points |
|----------|--------|
| hasMinLength function works correctly | 15 |
| hasUppercase function works correctly | 15 |
| hasLowercase function works correctly | 15 |
| hasDigit function works correctly | 15 |
| hasSpecialChar function works correctly | 15 |
| Main correctly combines results | 10 |
| Strength rating is accurate | 10 |
| Code organization and comments | 5 |
| **Total** | **100** |
