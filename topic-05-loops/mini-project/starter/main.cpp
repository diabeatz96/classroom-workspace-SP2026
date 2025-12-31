// Number Guessing Game
// Author: [Your Name]
// Date: [Today's Date]
// Description: A game where the player guesses a random number.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator (do this once at the start)
    srand(time(0));

    // Variable for play-again loop
    char playAgain;

    cout << "===== NUMBER GUESSING GAME =====" << '\n';

    do {
        // TODO: Generate a random number between 1 and 100
        // Formula: rand() % 100 + 1
        int target;

        // TODO: Declare variables for the guess and guess counter
        int guess;
        int guessCount = 0;

        cout << '\n';
        cout << "I'm thinking of a number between 1 and 100." << '\n';
        cout << '\n';

        // TODO: Create a loop that continues until the guess equals the target
        // Inside the loop:
        //   1. Prompt for a guess
        //   2. Read the guess
        //   3. Increment the counter
        //   4. Check if too high, too low, or correct


        // TODO: Display the success message with guess count


        // Ask to play again
        cout << '\n';
        cout << "Play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << '\n';
    cout << "Thanks for playing!" << '\n';

    return 0;
}
