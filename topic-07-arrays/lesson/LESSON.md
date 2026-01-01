# Topic 07: Arrays

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250310111928267476/declare-array.webp" alt="Array Declaration" width="600">
</p>
<p align="center"><em>Arrays store multiple values of the same type in consecutive memory locations</em></p>

## Learning Objectives

By the end of this lesson, you will be able to:
- Declare and initialize arrays
- Access and modify array elements using indices
- Traverse arrays using loops
- Use parallel arrays to store related data
- Pass arrays to functions
- Implement common array algorithms (sum, average, min, max, search)

## Why This Matters

So far, you have stored single values in variables. But what if you need to store 100 test scores? Creating 100 separate variables would be impractical. Arrays let you store multiple values of the same type under a single name, making it easy to process large amounts of data. Arrays are used everywhere: storing player scores in games, managing inventory in business software, and processing pixels in images.

## Core Concepts

### Concept 1: What is an Array?

An array is a collection of variables of the same type, stored in consecutive memory locations. Each element is accessed by its position (index).

```
Array: scores
Index:    [0]   [1]   [2]   [3]   [4]
Values:    85    92    78    95    88
```

Think of an array like a row of mailboxes - each box has a number (index) and can hold one item (value).

### Concept 2: Declaring Arrays

To declare an array, specify the type, name, and size:

```cpp
// Syntax: type name[size];

int scores[5];           // Array of 5 integers
double prices[10];       // Array of 10 doubles
char letters[26];        // Array of 26 characters
string names[100];       // Array of 100 strings
```

**Important:** The size must be a constant (known at compile time):

```cpp
const int SIZE = 5;
int numbers[SIZE];       // OK: SIZE is a constant

int n = 5;
int values[n];           // May not work in all compilers!
```

**Best Practice:** Always use a named constant for array size:

```cpp
const int MAX_STUDENTS = 30;
int grades[MAX_STUDENTS];
```

### Concept 3: Initializing Arrays

You can initialize arrays when you declare them:

```cpp
// Initialize with specific values
int scores[5] = {85, 92, 78, 95, 88};

// Let compiler determine size from initializer
int numbers[] = {10, 20, 30};  // Size is 3

// Partial initialization (remaining elements set to 0)
int data[5] = {1, 2};  // {1, 2, 0, 0, 0}

// Initialize all elements to 0
int zeros[10] = {0};   // All 10 elements are 0
int zeros2[10] = {};   // Also all 0
```

**Warning:** Uninitialized arrays contain garbage values!

```cpp
int garbage[5];        // Contains unpredictable values
cout << garbage[0];    // Could output anything!
```

### Concept 4: Accessing Array Elements

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250310111928141186/access-array-elements.webp" alt="Accessing Array Elements" width="550">
</p>
<p align="center"><em>Array elements are accessed using their index (position)</em></p>

Use the index (position) to access elements. **Indices start at 0!**

```cpp
int scores[5] = {85, 92, 78, 95, 88};

cout << scores[0];  // 85 (first element)
cout << scores[1];  // 92 (second element)
cout << scores[4];  // 88 (last element - index is size-1)

scores[2] = 80;     // Change third element from 78 to 80
```

**Common Mistake - Off by One:**

```cpp
int arr[5];         // Valid indices: 0, 1, 2, 3, 4
arr[5] = 10;        // ERROR! Index 5 is out of bounds
```

The last valid index is always `size - 1`.

### Concept 5: Traversing Arrays with Loops

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20250310111928472679/traverse-array.webp" alt="Array Traversal" width="550">
</p>
<p align="center"><em>Using a loop to visit each element in the array</em></p>

Use a `for` loop to process every element:

```cpp
const int SIZE = 5;
int scores[SIZE] = {85, 92, 78, 95, 88};

// Print all elements
for (int i = 0; i < SIZE; i++) {
    cout << "Score " << i << ": " << scores[i] << '\n';
}
```

Output:
```
Score 0: 85
Score 1: 92
Score 2: 78
Score 3: 95
Score 4: 88
```

**Loop Pattern:** Start at 0, continue while `i < SIZE`, increment by 1.

### Concept 6: Common Array Operations

**Sum of Elements:**
```cpp
int sum = 0;
for (int i = 0; i < SIZE; i++) {
    sum += scores[i];
}
cout << "Sum: " << sum << '\n';
```

**Average:**
```cpp
double average = static_cast<double>(sum) / SIZE;
cout << "Average: " << average << '\n';
```

**Finding the Maximum:**
```cpp
int max = scores[0];  // Start with first element
for (int i = 1; i < SIZE; i++) {
    if (scores[i] > max) {
        max = scores[i];
    }
}
cout << "Maximum: " << max << '\n';
```

**Finding the Minimum:**
```cpp
int min = scores[0];
for (int i = 1; i < SIZE; i++) {
    if (scores[i] < min) {
        min = scores[i];
    }
}
cout << "Minimum: " << min << '\n';
```

**Counting Elements That Meet a Condition:**
```cpp
int passingCount = 0;
for (int i = 0; i < SIZE; i++) {
    if (scores[i] >= 60) {
        passingCount++;
    }
}
cout << "Passing scores: " << passingCount << '\n';
```

### Concept 7: Reading Input into Arrays

```cpp
const int SIZE = 5;
int numbers[SIZE];

cout << "Enter " << SIZE << " numbers:" << '\n';
for (int i = 0; i < SIZE; i++) {
    cout << "Number " << (i + 1) << ": ";
    cin >> numbers[i];
}
```

**Reading Until a Sentinel Value:**
```cpp
const int MAX_SIZE = 100;
int values[MAX_SIZE];
int count = 0;  // Track how many values were entered

int input;
cout << "Enter numbers (-1 to stop):" << '\n';
cin >> input;

while (input != -1 && count < MAX_SIZE) {
    values[count] = input;
    count++;
    cin >> input;
}

// Now 'count' holds the actual number of elements
```

### Concept 8: Parallel Arrays

Use multiple arrays with the same indices to store related data:

```cpp
const int NUM_STUDENTS = 3;

string names[NUM_STUDENTS] = {"Alice", "Bob", "Carol"};
int scores[NUM_STUDENTS] = {92, 85, 78};

// Display student info
for (int i = 0; i < NUM_STUDENTS; i++) {
    cout << names[i] << ": " << scores[i] << '\n';
}
```

Output:
```
Alice: 92
Bob: 85
Carol: 78
```

The key insight: `names[i]` and `scores[i]` refer to the same student.

### Concept 9: Passing Arrays to Functions

Arrays are passed by reference automatically (no `&` needed):

```cpp
// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

// Function to calculate sum
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find maximum
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {5, 2, 8, 1, 9};
    int size = 5;

    printArray(numbers, size);
    cout << "Sum: " << sumArray(numbers, size) << '\n';
    cout << "Max: " << findMax(numbers, size) << '\n';

    return 0;
}
```

**Important:** You must pass the size as a separate parameter because the function does not know the array size.

**Functions Can Modify Arrays:**
```cpp
void doubleValues(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // Modifies original array!
    }
}
```

### Concept 10: Linear Search

Finding an element in an array:

```cpp
// Returns the index of target, or -1 if not found
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Found it at index i
        }
    }
    return -1;  // Not found
}

int main() {
    int numbers[] = {5, 2, 8, 1, 9};
    int index = linearSearch(numbers, 5, 8);

    if (index != -1) {
        cout << "Found at index " << index << '\n';
    } else {
        cout << "Not found" << '\n';
    }
}
```

## Putting It Together

```cpp
// Program: Class Grade Analyzer
// Demonstrates array operations

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void readGrades(int grades[], int size);
void displayGrades(int grades[], int size);
double calculateAverage(int grades[], int size);
int findHighest(int grades[], int size);
int findLowest(int grades[], int size);
int countAboveAverage(int grades[], int size, double average);

int main() {
    const int CLASS_SIZE = 5;
    int grades[CLASS_SIZE];

    cout << "===== Class Grade Analyzer =====" << '\n';
    cout << '\n';

    // Input
    readGrades(grades, CLASS_SIZE);

    // Process
    double avg = calculateAverage(grades, CLASS_SIZE);
    int high = findHighest(grades, CLASS_SIZE);
    int low = findLowest(grades, CLASS_SIZE);
    int aboveAvg = countAboveAverage(grades, CLASS_SIZE, avg);

    // Output
    cout << '\n';
    cout << "===== Results =====" << '\n';
    displayGrades(grades, CLASS_SIZE);
    cout << '\n';
    cout << fixed << setprecision(1);
    cout << "Average: " << avg << '\n';
    cout << "Highest: " << high << '\n';
    cout << "Lowest: " << low << '\n';
    cout << "Above average: " << aboveAvg << '\n';

    return 0;
}

void readGrades(int grades[], int size) {
    cout << "Enter " << size << " grades:" << '\n';
    for (int i = 0; i < size; i++) {
        cout << "Grade " << (i + 1) << ": ";
        cin >> grades[i];
    }
}

void displayGrades(int grades[], int size) {
    cout << "Grades: ";
    for (int i = 0; i < size; i++) {
        cout << grades[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << '\n';
}

double calculateAverage(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return static_cast<double>(sum) / size;
}

int findHighest(int grades[], int size) {
    int max = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] > max) {
            max = grades[i];
        }
    }
    return max;
}

int findLowest(int grades[], int size) {
    int min = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
    }
    return min;
}

int countAboveAverage(int grades[], int size, double average) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] > average) {
            count++;
        }
    }
    return count;
}
```

## Quick Reference

### Declaration and Initialization
```cpp
int arr[5];                      // Uninitialized
int arr[5] = {1, 2, 3, 4, 5};   // Initialized
int arr[] = {1, 2, 3};          // Size determined by initializer
int arr[5] = {0};               // All zeros
```

### Accessing Elements
```cpp
arr[0]      // First element
arr[i]      // Element at index i
arr[size-1] // Last element
```

### Traversal Pattern
```cpp
for (int i = 0; i < SIZE; i++) {
    // Process arr[i]
}
```

### Passing to Functions
```cpp
void processArray(int arr[], int size);
```

## Common Errors

### 1. Index Out of Bounds
```cpp
int arr[5];
arr[5] = 10;  // ERROR! Valid indices are 0-4
```

### 2. Forgetting Arrays Start at 0
```cpp
int arr[5] = {10, 20, 30, 40, 50};
cout << arr[1];  // Prints 20, not 10!
```

### 3. Using Wrong Size in Loops
```cpp
for (int i = 0; i <= SIZE; i++) {  // ERROR: <= should be <
    cout << arr[i];
}
```

### 4. Not Passing Size to Functions
```cpp
void print(int arr[]) {  // How many elements?
    // Cannot determine size inside function!
}
```

### 5. Trying to Return an Array
```cpp
int[] getArray() {  // ERROR: Cannot return arrays
    int arr[5];
    return arr;
}
```

### 6. Comparing Arrays Directly
```cpp
int a[3] = {1, 2, 3};
int b[3] = {1, 2, 3};
if (a == b) {  // Does NOT compare contents!
```
You must compare element by element.
