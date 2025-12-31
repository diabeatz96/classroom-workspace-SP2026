# Topic 08: Strings and 2D Arrays

## Learning Objectives

After completing this lesson, you will be able to:
- Use string operations: length, concatenation, comparison
- Apply string methods: find, substr, at
- Process strings character by character
- Declare and initialize 2D arrays
- Traverse 2D arrays by rows and columns
- Implement common grid and table patterns

---

## Part 1: String Operations

### The string Type

C++ provides the `std::string` type for working with text. Unlike character arrays, strings automatically manage their memory and provide many useful methods.

```cpp
#include <string>
using namespace std;

string greeting = "Hello";
string name = "World";
```

### String Length

Use `.length()` or `.size()` to get the number of characters:

```cpp
string word = "Programming";
cout << word.length() << '\n';  // Output: 11
```

### String Concatenation

Use `+` or `+=` to combine strings:

```cpp
string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;  // "John Doe"

string message = "Hello";
message += ", World!";  // "Hello, World!"
```

### String Comparison

Strings can be compared using relational operators. Comparison is lexicographic (dictionary order):

```cpp
string a = "apple";
string b = "banana";

if (a < b) {
    cout << "apple comes before banana\n";  // This prints
}

if (a == "apple") {
    cout << "Strings match!\n";
}
```

---

## Part 2: String Methods

### Accessing Characters

Access individual characters using brackets `[]` or `.at()`:

```cpp
string word = "Hello";
char first = word[0];      // 'H'
char last = word[4];       // 'o'
char safe = word.at(1);    // 'e' - throws exception if out of bounds
```

### Finding Substrings

The `.find()` method returns the index of a substring, or `string::npos` if not found:

```cpp
string sentence = "The quick brown fox";
size_t pos = sentence.find("quick");  // pos = 4

if (sentence.find("slow") == string::npos) {
    cout << "Not found!\n";
}
```

### Extracting Substrings

The `.substr()` method extracts part of a string:

```cpp
string text = "Hello, World!";
string part = text.substr(0, 5);    // "Hello" (start at 0, length 5)
string rest = text.substr(7);       // "World!" (from index 7 to end)
```

### Other Useful Methods

```cpp
string s = "Hello";

s.empty();          // false (checks if string is empty)
s.clear();          // removes all characters
s.push_back('!');   // adds character at end
s.pop_back();       // removes last character
s.insert(5, " World");  // inserts at position
s.erase(0, 6);      // erases 6 chars starting at 0
```

---

## Part 3: Character-by-Character Processing

### Looping Through Characters

Use a traditional for loop or range-based for loop:

```cpp
string word = "Hello";

// Traditional for loop (when you need the index)
for (int i = 0; i < word.length(); i++) {
    cout << word[i] << " ";
}
// Output: H e l l o

// Range-based for loop (simpler when index not needed)
for (char c : word) {
    cout << c << " ";
}
```

### Character Functions

Include `<cctype>` for character classification and conversion:

```cpp
#include <cctype>

char c = 'A';
isalpha(c);   // true - is it a letter?
isdigit(c);   // false - is it a digit?
isspace(c);   // false - is it whitespace?
isupper(c);   // true - is it uppercase?
islower(c);   // false - is it lowercase?

toupper('a'); // 'A' - convert to uppercase
tolower('A'); // 'a' - convert to lowercase
```

### Example: Counting Vowels

```cpp
string text = "Hello World";
int vowelCount = 0;

for (char c : text) {
    char lower = tolower(c);
    if (lower == 'a' || lower == 'e' || lower == 'i' ||
        lower == 'o' || lower == 'u') {
        vowelCount++;
    }
}
cout << "Vowels: " << vowelCount << '\n';  // Output: 3
```

---

## Part 4: 2D Arrays

### Declaration and Initialization

A 2D array is like a table with rows and columns:

```cpp
// Declare a 3x4 array (3 rows, 4 columns)
int grid[3][4];

// Initialize with values
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

### Accessing Elements

Use two indices: `array[row][column]`

```cpp
int grid[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

int value = grid[0][2];  // Row 0, Column 2 = 3
grid[1][0] = 10;         // Change row 1, col 0 to 10
```

### Visualizing a 2D Array

```
           Column 0   Column 1   Column 2
         +---------+---------+---------+
Row 0    |    1    |    2    |    3    |
         +---------+---------+---------+
Row 1    |    4    |    5    |    6    |
         +---------+---------+---------+

grid[0][0] = 1    grid[0][1] = 2    grid[0][2] = 3
grid[1][0] = 4    grid[1][1] = 5    grid[1][2] = 6
```

---

## Part 5: Traversing 2D Arrays

### Row-by-Row Traversal

Process all elements from left to right, top to bottom:

```cpp
const int ROWS = 3;
const int COLS = 4;
int grid[ROWS][COLS] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

// Print the grid
for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
        cout << grid[r][c] << " ";
    }
    cout << '\n';
}
```

### Column-by-Column Traversal

Process all elements from top to bottom, left to right:

```cpp
// Sum each column
for (int c = 0; c < COLS; c++) {
    int colSum = 0;
    for (int r = 0; r < ROWS; r++) {
        colSum += grid[r][c];
    }
    cout << "Column " << c << " sum: " << colSum << '\n';
}
```

### Finding Sum, Max, Min

```cpp
int sum = 0;
int maxVal = grid[0][0];

for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
        sum += grid[r][c];
        if (grid[r][c] > maxVal) {
            maxVal = grid[r][c];
        }
    }
}
```

---

## Part 6: Common 2D Array Patterns

### Input from User

```cpp
const int SIZE = 3;
int grid[SIZE][SIZE];

cout << "Enter " << SIZE * SIZE << " values:\n";
for (int r = 0; r < SIZE; r++) {
    for (int c = 0; c < SIZE; c++) {
        cin >> grid[r][c];
    }
}
```

### Matrix Operations

```cpp
// Add two matrices
int a[2][2] = {{1, 2}, {3, 4}};
int b[2][2] = {{5, 6}, {7, 8}};
int result[2][2];

for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 2; c++) {
        result[r][c] = a[r][c] + b[r][c];
    }
}
```

### Diagonal Elements

```cpp
// Sum diagonal of a square matrix
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int diagSum = 0;
for (int i = 0; i < 3; i++) {
    diagSum += matrix[i][i];  // Main diagonal: [0][0], [1][1], [2][2]
}
// diagSum = 1 + 5 + 9 = 15
```

---

## Common Mistakes to Avoid

1. **Forgetting string::npos check**
   ```cpp
   // Wrong - may give unexpected results
   if (str.find("text") >= 0) { }

   // Correct
   if (str.find("text") != string::npos) { }
   ```

2. **Row/Column confusion in 2D arrays**
   ```cpp
   // Remember: first index is row, second is column
   grid[row][col]  // Correct
   grid[col][row]  // Usually wrong!
   ```

3. **Out-of-bounds access**
   ```cpp
   int arr[3][3];
   arr[3][0] = 5;  // Error! Valid rows are 0, 1, 2
   ```

4. **Using wrong loop limits**
   ```cpp
   // For a grid[ROWS][COLS]:
   for (int r = 0; r < ROWS; r++) {     // Outer loop over ROWS
       for (int c = 0; c < COLS; c++) { // Inner loop over COLS
   ```

---

## Practice Checklist

Before moving to the exercises, make sure you can:

- [ ] Get string length and access individual characters
- [ ] Find and extract substrings
- [ ] Loop through a string character by character
- [ ] Use character functions (isalpha, toupper, etc.)
- [ ] Declare and initialize 2D arrays
- [ ] Traverse 2D arrays with nested loops
- [ ] Access specific rows, columns, and diagonals

---

## Next Steps

1. Study the [examples](examples/) in this lesson
2. Work through the [exercises](../exercises/) in order
3. Complete the [Word Games mini-project](../mini-project/)
