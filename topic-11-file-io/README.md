# Topic 11: File Input/Output (Special Topic)

## Overview

In this special topic, you will learn how to work with files in C++. File I/O (Input/Output) allows your programs to save data permanently and read data from external sources. This is essential for creating programs that persist data between runs.

## What You Will Learn

- Opening and closing files
- Writing data to text files
- Reading data from text files
- Checking if a file exists or opened successfully
- Reading files line by line vs. word by word
- Working with CSV (comma-separated values) files
- Appending data to existing files
- Error handling for file operations

## Prerequisites

Before starting this topic, you should be comfortable with:
- Variables and data types (Topic 02)
- Loops (Topic 05)
- Functions (Topic 06)
- Arrays (Topic 07)
- Strings (Topic 08)

## Materials

### Lesson
- [LESSON.md](lesson/LESSON.md) - Main instructional content
- [examples/](lesson/examples/) - Standalone example programs

### Exercises (Complete in Order)

1. **[Worked Examples](exercises/worked-examples/)** - Study complete solutions with explanations
2. **[Parsons Problems](exercises/parsons-problems/)** - Arrange scrambled code into correct order
3. **[Completion Problems](exercises/completion/)** - Fill in the blanks in partial code
4. **[Practice Problems](exercises/practice/)** - Write programs from scratch

### Mini-Project
- [Personal Journal](mini-project/PROJECT.md) - Create a journal application that saves entries to files

## Key Concepts at a Glance

### Including the File Stream Library
```cpp
#include <fstream>
```

### File Stream Types
| Type | Purpose |
|------|---------|
| `ofstream` | Output file stream (writing) |
| `ifstream` | Input file stream (reading) |
| `fstream` | Both reading and writing |

### Basic File Operations
```cpp
// Writing to a file
ofstream outFile("data.txt");
outFile << "Hello, File!" << endl;
outFile.close();

// Reading from a file
ifstream inFile("data.txt");
string line;
getline(inFile, line);
inFile.close();
```

### Checking if File Opened
```cpp
ifstream file("data.txt");
if (!file.is_open()) {
    cout << "Error: Could not open file!" << endl;
}
```

## Common File Modes

| Mode | Description |
|------|-------------|
| `ios::out` | Write (default for ofstream) |
| `ios::in` | Read (default for ifstream) |
| `ios::app` | Append to end of file |
| `ios::trunc` | Truncate (clear) file if exists |

## Duration

This special topic can be completed in 1 week.

## Why Learn File I/O?

- **Data Persistence**: Save user data between program runs
- **Configuration Files**: Store and load program settings
- **Data Processing**: Read and process large datasets
- **Logging**: Record program events and errors
- **Real-world Applications**: Almost every professional application uses files

## Next Steps

After completing this topic, you can:
- Create programs that save and load user data
- Process data files (CSV, logs, etc.)
- Build applications with persistent storage
- Learn about binary file I/O for advanced data storage
