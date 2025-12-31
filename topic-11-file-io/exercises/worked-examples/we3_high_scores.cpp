// Worked Example 3: High Score System
// Problem: Create a high score system that saves and loads scores from a file.

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_SCORES = 5;
const string SCORES_FILE = "highscores.txt";

// Structure to hold a score entry
struct ScoreEntry {
    string name;
    int score;
};

// Step 1: Function to load high scores from file
int loadScores(ScoreEntry scores[]) {
    ifstream inFile(SCORES_FILE);

    if (!inFile.is_open()) {
        return 0;  // No scores yet
    }

    int count = 0;
    while (count < MAX_SCORES && inFile >> scores[count].name >> scores[count].score) {
        count++;
    }

    inFile.close();
    return count;
}

// Step 2: Function to save high scores to file
void saveScores(ScoreEntry scores[], int count) {
    ofstream outFile(SCORES_FILE);

    if (!outFile.is_open()) {
        cout << "Error: Could not save scores!" << endl;
        return;
    }

    for (int i = 0; i < count; i++) {
        outFile << scores[i].name << " " << scores[i].score << endl;
    }

    outFile.close();
}

// Step 3: Function to display high scores
void displayScores(ScoreEntry scores[], int count) {
    cout << "\n===== HIGH SCORES =====" << endl;

    if (count == 0) {
        cout << "No scores yet!" << endl;
    } else {
        cout << left << setw(5) << "Rank"
             << setw(15) << "Name"
             << right << setw(10) << "Score" << endl;
        cout << "------------------------------" << endl;

        for (int i = 0; i < count; i++) {
            cout << left << setw(5) << (i + 1)
                 << setw(15) << scores[i].name
                 << right << setw(10) << scores[i].score << endl;
        }
    }
    cout << "=======================\n" << endl;
}

// Step 4: Function to add a new score (keeps list sorted)
void addScore(ScoreEntry scores[], int& count, const string& name, int score) {
    // Step 4a: Find where to insert the new score
    int insertPos = count;
    for (int i = 0; i < count; i++) {
        if (score > scores[i].score) {
            insertPos = i;
            break;
        }
    }

    // Step 4b: If score qualifies for top list
    if (insertPos < MAX_SCORES) {
        // Shift lower scores down
        for (int i = min(count, MAX_SCORES - 1); i > insertPos; i--) {
            scores[i] = scores[i - 1];
        }

        // Insert new score
        scores[insertPos].name = name;
        scores[insertPos].score = score;

        // Update count
        if (count < MAX_SCORES) {
            count++;
        }

        cout << "New high score! Rank #" << (insertPos + 1) << endl;
    } else {
        cout << "Score didn't make the top " << MAX_SCORES << "." << endl;
    }
}

int main() {
    ScoreEntry highScores[MAX_SCORES];

    // Load existing scores
    int scoreCount = loadScores(highScores);
    cout << "Loaded " << scoreCount << " existing score(s)." << endl;

    displayScores(highScores, scoreCount);

    // Simulate some new scores
    cout << "Adding new scores..." << endl;

    addScore(highScores, scoreCount, "Alice", 1500);
    addScore(highScores, scoreCount, "Bob", 2000);
    addScore(highScores, scoreCount, "Carol", 1800);
    addScore(highScores, scoreCount, "David", 2500);
    addScore(highScores, scoreCount, "Eve", 1200);
    addScore(highScores, scoreCount, "Frank", 3000);  // New top score!

    displayScores(highScores, scoreCount);

    // Save scores
    saveScores(highScores, scoreCount);
    cout << "Scores saved to " << SCORES_FILE << endl;

    return 0;
}

/*
First run output:
Loaded 0 existing score(s).

===== HIGH SCORES =====
No scores yet!
=======================

Adding new scores...
New high score! Rank #1
New high score! Rank #1
New high score! Rank #2
New high score! Rank #1
New high score! Rank #5
New high score! Rank #1

===== HIGH SCORES =====
Rank Name               Score
------------------------------
1    Frank               3000
2    David               2500
3    Bob                 2000
4    Carol               1800
5    Alice               1500
=======================

Scores saved to highscores.txt

---
Trace Questions:

1. Why do we pass count by reference in addScore?
   Answer: Because we may increase it if a new score is added.

2. How does the insertion work?
   Answer: We find the position, shift existing scores down,
   then insert the new score at the correct position.

3. What happens when Frank (3000) is added?
   Answer: Everyone shifts down, Eve (1200) gets pushed off
   the list since we only keep MAX_SCORES entries.
*/
