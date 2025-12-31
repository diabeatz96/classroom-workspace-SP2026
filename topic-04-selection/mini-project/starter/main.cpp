// Movie Ticket Pricing
// Author: [Your Name]
// Date: [Today's Date]
// Description: Calculates movie ticket prices based on multiple factors.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Variables for user input
    int age;
    int dayOfWeek;    // 1=Monday, 7=Sunday
    int showtime;     // 24-hour format
    char is3D;        // Y or N

    // Variables for pricing
    double basePrice = 0;
    double tuesdayDiscount = 0;
    double matineeDiscount = 0;
    double weekendSurcharge = 0;
    double threeDSurcharge = 0;
    double finalPrice = 0;

    // Display header
    cout << "===== MOVIE TICKET PRICING =====" << '\n';
    cout << '\n';

    // TODO: Get user input
    // - Age
    // - Day of week (1-7)
    // - Showtime (24-hour format)
    // - 3D movie (Y/N)


    // TODO: Determine base price by age
    // - Under 13: $8.00
    // - 13-64: $12.00
    // - 65+: $9.00


    // TODO: Check for Tuesday discount (50% off base price)
    // Day 2 = Tuesday


    // TODO: Check for matinee discount ($2 off)
    // Matinee = showtime before 17 (5 PM)


    // TODO: Check for weekend surcharge ($2)
    // Weekend = day 6 (Saturday) or day 7 (Sunday)


    // TODO: Check for 3D surcharge ($3)
    // If is3D is 'Y' or 'y'


    // TODO: Calculate final price
    // final = base - tuesdayDiscount - matineeDiscount + weekendSurcharge + threeDSurcharge


    // Set output formatting
    cout << fixed << setprecision(2);

    // TODO: Display the breakdown and total


    return 0;
}
