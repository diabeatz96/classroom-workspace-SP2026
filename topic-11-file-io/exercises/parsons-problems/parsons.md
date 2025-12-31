# Parsons Problems: File I/O

Arrange the code blocks in the correct order to solve each problem.

---

## Problem 1: Write to a File
**Task:** Write "Hello, World!" to a file called output.txt.

```cpp
// Arrange these lines:
outFile << "Hello, World!" << endl;
ofstream outFile("output.txt");
outFile.close();
#include <fstream>
```

<details>
<summary>Solution</summary>

```cpp
#include <fstream>
ofstream outFile("output.txt");
outFile << "Hello, World!" << endl;
outFile.close();
```
</details>

---

## Problem 2: Read a File Line by Line
**Task:** Read and print all lines from a file.

```cpp
// Arrange these lines:
while (getline(inFile, line)) {
inFile.close();
string line;
cout << line << endl;
ifstream inFile("data.txt");
}
```

<details>
<summary>Solution</summary>

```cpp
ifstream inFile("data.txt");
string line;
while (getline(inFile, line)) {
    cout << line << endl;
}
inFile.close();
```
</details>

---

## Problem 3: Check If File Opened
**Task:** Try to open a file and display an error if it fails.

```cpp
// Arrange these lines:
return 1;
if (!inFile.is_open()) {
ifstream inFile("input.txt");
}
cout << "Error: Could not open file!" << endl;
```

<details>
<summary>Solution</summary>

```cpp
ifstream inFile("input.txt");
if (!inFile.is_open()) {
    cout << "Error: Could not open file!" << endl;
    return 1;
}
```
</details>

---

## Problem 4: Read Numbers and Sum Them
**Task:** Read numbers from a file and calculate their sum.

```cpp
// Arrange these lines:
sum += number;
while (inFile >> number) {
int sum = 0;
}
ifstream inFile("numbers.txt");
int number;
cout << "Sum: " << sum << endl;
```

<details>
<summary>Solution</summary>

```cpp
ifstream inFile("numbers.txt");
int number;
int sum = 0;
while (inFile >> number) {
    sum += number;
}
cout << "Sum: " << sum << endl;
```
</details>

---

## Problem 5: Append to a File
**Task:** Add a new line to an existing file without erasing its contents.

```cpp
// Arrange these lines:
outFile.close();
outFile << "This is a new line." << endl;
#include <fstream>
ofstream outFile("log.txt", ios::app);
```

<details>
<summary>Solution</summary>

```cpp
#include <fstream>
ofstream outFile("log.txt", ios::app);
outFile << "This is a new line." << endl;
outFile.close();
```
</details>

---

## Problem 6: Write Multiple Values
**Task:** Write a name and score to a file, separated by a space.

```cpp
// Arrange these lines:
outFile << name << " " << score << endl;
int score = 95;
ofstream outFile("scores.txt");
string name = "Alice";
outFile.close();
```

<details>
<summary>Solution</summary>

```cpp
string name = "Alice";
int score = 95;
ofstream outFile("scores.txt");
outFile << name << " " << score << endl;
outFile.close();
```
</details>

---

## Problem 7: Read Structured Data
**Task:** Read a name and score from a file.

```cpp
// Arrange these lines:
inFile >> name >> score;
ifstream inFile("data.txt");
int score;
string name;
cout << name << " scored " << score << endl;
inFile.close();
```

<details>
<summary>Solution</summary>

```cpp
ifstream inFile("data.txt");
string name;
int score;
inFile >> name >> score;
cout << name << " scored " << score << endl;
inFile.close();
```
</details>

---

## Problem 8: Count Lines in a File
**Task:** Count how many lines are in a file.

```cpp
// Arrange these lines:
lineCount++;
while (getline(inFile, line)) {
int lineCount = 0;
}
string line;
ifstream inFile("text.txt");
cout << "Lines: " << lineCount << endl;
```

<details>
<summary>Solution</summary>

```cpp
ifstream inFile("text.txt");
string line;
int lineCount = 0;
while (getline(inFile, line)) {
    lineCount++;
}
cout << "Lines: " << lineCount << endl;
```
</details>

---

## Self-Assessment

After completing these problems, you should be able to:
- [ ] Create and open files for writing with ofstream
- [ ] Open and read files with ifstream
- [ ] Check if a file opened successfully
- [ ] Read files line by line with getline
- [ ] Read individual values with the >> operator
- [ ] Append to existing files using ios::app
- [ ] Close files properly after use
