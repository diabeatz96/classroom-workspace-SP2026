# Project: Number Guessing Game

## Overview

You will create an interactive number guessing game where the computer picks a random number and the player tries to guess it. The game provides hints ("higher" or "lower") and tracks the number of guesses.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Use loops to repeat game logic
- Validate user input
- Track game statistics with counters
- Implement game logic with conditionals inside loops

## Requirements

Your program must:

1. Generate a random number between 1 and 100
2. Allow the player to guess repeatedly until correct
3. After each guess, display:
   - "Too high!" if the guess is above the target
   - "Too low!" if the guess is below the target
   - "Correct!" when they guess correctly
4. Count and display the number of guesses
5. Ask if the player wants to play again

## Example Output

```
===== NUMBER GUESSING GAME =====

I'm thinking of a number between 1 and 100.

Enter your guess: 50
Too high!

Enter your guess: 25
Too low!

Enter your guess: 37
Too high!

Enter your guess: 31
Correct! You got it in 4 guesses.

Play again? (Y/N): Y

I'm thinking of a number between 1 and 100.

Enter your guess: 75
...
```

## Getting Started

1. **Random number generation:**
```cpp
#include <cstdlib>
#include <ctime>

// At the start of main():
srand(time(0));  // Seed the random generator

// To get a random number 1-100:
int target = rand() % 100 + 1;
```

2. **Game structure:** Use a do-while loop for the main game, with a while loop for guessing

3. **Input validation:** Consider what happens if the user enters a number outside 1-100

## Hints

<details>
<summary>Hint 1: Basic Game Loop</summary>

```cpp
int guess;
int guessCount = 0;

while (guess != target) {
    cout << "Enter your guess: ";
    cin >> guess;
    guessCount++;

    if (guess > target) {
        cout << "Too high!" << '\n';
    } else if (guess < target) {
        cout << "Too low!" << '\n';
    }
}

cout << "Correct! You got it in " << guessCount << " guesses." << '\n';
```
</details>

<details>
<summary>Hint 2: Play Again Loop</summary>

Wrap the entire game in a do-while:
```cpp
char playAgain;

do {
    // Generate new number
    // Game logic here

    cout << "Play again? (Y/N): ";
    cin >> playAgain;

} while (playAgain == 'Y' || playAgain == 'y');
```
</details>

<details>
<summary>Hint 3: Input Validation</summary>

```cpp
while (guess < 1 || guess > 100) {
    cout << "Please enter a number between 1 and 100: ";
    cin >> guess;
}
```
</details>

## Extensions (Optional)

1. **Difficulty levels:** Easy (1-50), Medium (1-100), Hard (1-500)

2. **Limited guesses:** Give the player only 7 guesses

3. **High score:** Track the best (lowest) number of guesses across games

4. **Hot/Cold hints:** Add "You're getting warmer/colder" based on distance from target

5. **Statistics:** After each game, show average guesses per game

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Generates random number correctly | 15 |
| Game loop works correctly | 20 |
| Higher/lower hints are accurate | 20 |
| Counts guesses correctly | 15 |
| Play-again feature works | 15 |
| User-friendly output | 10 |
| Code is well-organized | 5 |
| **Total** | **100** |
