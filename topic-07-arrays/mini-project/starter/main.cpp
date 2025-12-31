// Grade Tracker
// Author: [Your Name]
// Date: [Today's Date]
// Description: Tracks quiz scores and calculates statistics.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int MAX_SCORES = 10;
    int scores[MAX_SCORES];
    int count = 0;  // How many scores have been entered

    cout << "===== GRADE TRACKER =====" << '\n';
    cout << '\n';
    cout << "Enter quiz scores (enter -1 when done, max 10):" << '\n';

    // TODO: Input loop
    // Read scores until user enters -1 or array is full
    // Store each valid score in the array and increment count


    // TODO: Calculate sum
    int sum = 0;


    // TODO: Calculate average
    double average = 0;


    // TODO: Find highest and lowest scores
    int highest = 0;
    int lowest = 0;


    // TODO: Count scores above average
    int aboveAverage = 0;


    // Display results
    cout << '\n';
    cout << "----- GRADE REPORT -----" << '\n';
    cout << "Scores entered: " << count << '\n';
    cout << '\n';

    // TODO: Display all scores on one line


    cout << '\n';
    cout << "Statistics:" << '\n';
    cout << fixed << setprecision(1);
    cout << "  Sum:     " << sum << '\n';
    cout << "  Average: " << average << '\n';
    cout << "  Highest: " << highest << '\n';
    cout << "  Lowest:  " << lowest << '\n';
    cout << '\n';
    cout << "Scores above average: " << aboveAverage << '\n';

    return 0;
}
