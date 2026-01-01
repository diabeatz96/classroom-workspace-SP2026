# Topic 11: File Input/Output

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20191129162746/CPP-File-Handling.png" alt="C++ File Handling" width="600">
</p>
<p align="center"><em>C++ file stream classes: ifstream for input, ofstream for output, fstream for both</em></p>

## Learning Objectives

After completing this lesson, you will be able to:
- Open and close files for reading and writing
- Write data to text files using ofstream
- Read data from text files using ifstream
- Check if files opened successfully
- Read files line by line and word by word
- Append data to existing files
- Work with structured data files (CSV)
- Handle common file errors

---

## Part 1: Introduction to File I/O

### Why Use Files?

So far, all our programs have lost their data when they ended. File I/O lets us:
- **Save data permanently** to disk
- **Load data** when the program starts again
- **Process large amounts** of data from external sources
- **Share data** between different programs

### The fstream Library

C++ provides the `<fstream>` library for file operations:

```cpp
#include <fstream>
using namespace std;
```

### Three File Stream Types

| Type | Purpose | Think of it as... |
|------|---------|-------------------|
| `ofstream` | **O**utput **F**ile stream | Writing TO a file |
| `ifstream` | **I**nput **F**ile stream | Reading FROM a file |
| `fstream` | General file stream | Both reading and writing |

---

## Part 2: Writing to Files

### Basic File Writing

```cpp
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an output file stream
    ofstream outFile("output.txt");

    // Write to the file (just like cout!)
    outFile << "Hello, File!" << endl;
    outFile << "This is line 2." << endl;
    outFile << "Number: " << 42 << endl;

    // Always close the file when done
    outFile.close();

    cout << "Data written to file!" << endl;
    return 0;
}
```

**Result in output.txt:**
```
Hello, File!
This is line 2.
Number: 42
```

### Key Points

1. `ofstream outFile("filename")` - Creates/opens a file for writing
2. Use `<<` just like you use with `cout`
3. **Always call `.close()`** when finished
4. If the file exists, it will be **overwritten** by default

### Checking if File Opened Successfully

Always check if the file opened:

```cpp
ofstream outFile("output.txt");

if (!outFile.is_open()) {
    cout << "Error: Could not create file!" << endl;
    return 1;  // Exit with error code
}

// Safe to write now
outFile << "File opened successfully!" << endl;
outFile.close();
```

### Alternative: Using .open()

```cpp
ofstream outFile;
outFile.open("output.txt");

if (outFile.fail()) {
    cout << "Error opening file!" << endl;
    return 1;
}

outFile << "Hello!" << endl;
outFile.close();
```

---

## Part 3: Reading from Files

### Basic File Reading

```cpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create an input file stream
    ifstream inFile("input.txt");

    // Check if file opened
    if (!inFile.is_open()) {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }

    // Read one line
    string line;
    getline(inFile, line);
    cout << "First line: " << line << endl;

    // Close the file
    inFile.close();

    return 0;
}
```

### Reading Word by Word

Use `>>` to read words (separated by whitespace):

```cpp
ifstream inFile("data.txt");
string word;

while (inFile >> word) {
    cout << "Word: " << word << endl;
}

inFile.close();
```

**If data.txt contains:** `Hello World How Are You`

**Output:**
```
Word: Hello
Word: World
Word: How
Word: Are
Word: You
```

### Reading Line by Line

Use `getline()` to read entire lines:

```cpp
ifstream inFile("data.txt");
string line;

while (getline(inFile, line)) {
    cout << "Line: " << line << endl;
}

inFile.close();
```

**If data.txt contains:**
```
First line here
Second line here
Third line here
```

**Output:**
```
Line: First line here
Line: Second line here
Line: Third line here
```

### Reading Numbers

```cpp
ifstream inFile("numbers.txt");
int number;

while (inFile >> number) {
    cout << "Read: " << number << endl;
}

inFile.close();
```

**If numbers.txt contains:** `10 20 30 40 50`

**Output:**
```
Read: 10
Read: 20
Read: 30
Read: 40
Read: 50
```

---

## Part 4: File Modes

### Append Mode

To add to an existing file without erasing it:

```cpp
// ios::app = append mode
ofstream outFile("log.txt", ios::app);

outFile << "New entry added!" << endl;

outFile.close();
```

### Common File Modes

| Mode | Description |
|------|-------------|
| `ios::out` | Write mode (default for ofstream) |
| `ios::in` | Read mode (default for ifstream) |
| `ios::app` | Append to end of file |
| `ios::trunc` | Truncate (clear) file |
| `ios::binary` | Binary mode |

### Combining Modes

```cpp
// Open for writing, clear existing content
ofstream file1("data.txt", ios::out | ios::trunc);

// Open for writing, append to end
ofstream file2("log.txt", ios::out | ios::app);
```

---

## Part 5: Reading Mixed Data Types

### Reading Structured Data

When a file has mixed types on each line:

**students.txt:**
```
Alice 95
Bob 87
Carol 92
```

```cpp
ifstream inFile("students.txt");
string name;
int score;

while (inFile >> name >> score) {
    cout << name << " scored " << score << endl;
}

inFile.close();
```

### Reading CSV Files

CSV (Comma-Separated Values) files need special handling:

**data.csv:**
```
Alice,95,A
Bob,87,B
Carol,92,A
```

```cpp
#include <sstream>  // For stringstream

ifstream inFile("data.csv");
string line;

while (getline(inFile, line)) {
    stringstream ss(line);
    string name, grade;
    int score;

    getline(ss, name, ',');     // Read until comma
    ss >> score;                 // Read number
    ss.ignore();                 // Skip the comma
    getline(ss, grade);          // Read rest of line

    cout << name << ": " << score << " (" << grade << ")" << endl;
}

inFile.close();
```

---

## Part 6: Practical Patterns

### Check if File Exists

```cpp
#include <fstream>

bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}

int main() {
    if (fileExists("data.txt")) {
        cout << "File exists!" << endl;
    } else {
        cout << "File does not exist." << endl;
    }
    return 0;
}
```

### Count Lines in a File

```cpp
int countLines(const string& filename) {
    ifstream file(filename);
    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    file.close();
    return count;
}
```

### Copy a File

```cpp
void copyFile(const string& source, const string& dest) {
    ifstream in(source);
    ofstream out(dest);

    string line;
    while (getline(in, line)) {
        out << line << endl;
    }

    in.close();
    out.close();
}
```

### Read File into Array

```cpp
const int MAX_LINES = 100;
string lines[MAX_LINES];
int lineCount = 0;

ifstream file("data.txt");
while (lineCount < MAX_LINES && getline(file, lines[lineCount])) {
    lineCount++;
}
file.close();

// Now lines[0] through lines[lineCount-1] contain the file content
```

---

## Part 7: Error Handling

### Common File Errors

1. **File doesn't exist** (when reading)
2. **No permission** to read/write
3. **Disk full** (when writing)
4. **Invalid filename**

### Robust File Reading

```cpp
ifstream inFile(filename);

if (!inFile) {
    cerr << "Error: Cannot open " << filename << endl;
    return 1;
}

// Read file...

if (inFile.bad()) {
    cerr << "Error: Problem reading file!" << endl;
}

inFile.close();
```

### File State Functions

| Function | Returns true when... |
|----------|---------------------|
| `.is_open()` | File is open |
| `.good()` | No errors occurred |
| `.eof()` | End of file reached |
| `.fail()` | Operation failed |
| `.bad()` | Serious error occurred |

---

## Part 8: Best Practices

### 1. Always Check if File Opened

```cpp
ifstream file(filename);
if (!file.is_open()) {
    // Handle error
}
```

### 2. Always Close Files

```cpp
ofstream file("data.txt");
// ... use file ...
file.close();  // Don't forget!
```

### 3. Use Meaningful Filenames

```cpp
// Good
ofstream userDataFile("user_preferences.txt");
ofstream logFile("application_log.txt");

// Bad
ofstream f1("a.txt");
ofstream x("temp");
```

### 4. Handle Errors Gracefully

```cpp
if (!file.is_open()) {
    cout << "Could not open file. Creating new one..." << endl;
    // Create default file or ask user what to do
}
```

### 5. Use Constants for Filenames

```cpp
const string DATA_FILE = "game_save.txt";
const string CONFIG_FILE = "settings.txt";

// Later in code:
ifstream saveFile(DATA_FILE);
```

---

## Common Mistakes to Avoid

1. **Forgetting to close files**
   ```cpp
   // WRONG - file never closed
   ofstream file("data.txt");
   file << "Hello";
   // program ends without close()

   // CORRECT
   ofstream file("data.txt");
   file << "Hello";
   file.close();
   ```

2. **Not checking if file opened**
   ```cpp
   // WRONG - might crash if file doesn't exist
   ifstream file("data.txt");
   string line;
   getline(file, line);

   // CORRECT
   ifstream file("data.txt");
   if (!file.is_open()) {
       cout << "Error!" << endl;
       return 1;
   }
   string line;
   getline(file, line);
   ```

3. **Using wrong stream type**
   ```cpp
   // WRONG - ifstream is for reading, not writing
   ifstream file("output.txt");
   file << "Hello";  // Won't work!

   // CORRECT
   ofstream file("output.txt");
   file << "Hello";
   ```

4. **Overwriting when you meant to append**
   ```cpp
   // This ERASES the file each time!
   ofstream file("log.txt");

   // This ADDS to the file
   ofstream file("log.txt", ios::app);
   ```

---

## Practice Checklist

Before moving to the exercises, make sure you can:

- [ ] Create and write to a text file
- [ ] Read from a text file line by line
- [ ] Read from a text file word by word
- [ ] Check if a file opened successfully
- [ ] Append data to an existing file
- [ ] Read numbers and strings from a file
- [ ] Handle file errors appropriately

---

## Next Steps

1. Study the [examples](examples/) in this lesson
2. Work through the [exercises](../exercises/) in order
3. Complete the [Personal Journal mini-project](../mini-project/)
