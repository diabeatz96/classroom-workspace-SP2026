# Practice Problems: File I/O

Work through these problems to practice file reading and writing in C++.

---

## Problem 1: Simple Logger
**Difficulty:** Easy

Write a program that creates a log file called "activity.txt" and writes 5 timestamped messages to it. Each message should be on its own line in this format:
```
[1] Program started
[2] Loading data...
[3] Processing complete
[4] Saving results...
[5] Program ended
```

**Requirements:**
- Create the file using ofstream
- Write 5 different messages with numbered prefixes
- Close the file properly
- Display a confirmation message

---

## Problem 2: File Copy
**Difficulty:** Easy

Write a program that:
1. Creates a source file called "original.txt" with some sample text
2. Reads the content from "original.txt"
3. Writes the content to a new file called "copy.txt"
4. Displays both files to confirm the copy worked

**Requirements:**
- Use ifstream to read and ofstream to write
- Copy the file line by line
- Handle the case where the source file does not exist

---

## Problem 3: Temperature Log
**Difficulty:** Medium

Create a program that manages a temperature log:
1. Write 7 daily temperatures (one per day) to "temperatures.txt"
2. Read the temperatures back
3. Calculate and display the average, highest, and lowest temperatures

**Sample Data:**
```
72.5
75.0
68.3
71.2
69.8
74.1
73.5
```

---

## Problem 4: Contact Book
**Difficulty:** Medium

Create a simple contact book that saves to a file:
1. Define a struct with name and phone number
2. Create an array of 3 contacts with sample data
3. Write all contacts to "contacts.txt" (one contact per line: name,phone)
4. Read the contacts back from the file
5. Display the loaded contacts in a formatted table

**Sample Output:**
```
Name            Phone
----------------------------
John Doe        555-1234
Jane Smith      555-5678
Bob Wilson      555-9999
```

---

## Problem 5: Word Counter
**Difficulty:** Medium

Write a program that:
1. Creates a text file with at least 3 sentences
2. Reads the file and counts:
   - Total number of characters (excluding spaces)
   - Total number of words
   - Total number of lines
3. Displays the statistics

**Hint:** Use getline to read lines, then process each line character by character or word by word.

---

## Problem 6: Grade Book
**Difficulty:** Medium-Hard

Create a grade book system that:
1. Stores student names and their 3 test scores in a file
2. Format: "Name Score1 Score2 Score3" (one student per line)
3. Reads the file and calculates each student's average
4. Determines the letter grade (A: 90+, B: 80+, C: 70+, D: 60+, F: below 60)
5. Displays a formatted report

**Sample Input File:**
```
Alice 85 90 88
Bob 72 68 75
Carol 95 92 98
```

**Sample Output:**
```
Student     Scores        Average  Grade
-----------------------------------------
Alice       85  90  88    87.7     B
Bob         72  68  75    71.7     C
Carol       95  92  98    95.0     A
```

---

## Problem 7: Append Mode Log
**Difficulty:** Medium

Create a program that simulates a session logger:
1. Each time the program runs, it appends a new entry to "sessions.txt"
2. The entry should include a session number and a timestamp message
3. The program should first read the file to count existing sessions
4. Then append the new session entry
5. Display all sessions after adding the new one

**Expected behavior after 3 runs:**
```
Session 1: Program started
Session 2: Program started
Session 3: Program started
```

---

## Problem 8: CSV Parser
**Difficulty:** Hard

Create a program that works with a CSV file of product data:
1. Write a products.csv file with headers and 5 products
2. Format: "Name,Price,Quantity"
3. Read and parse the CSV file
4. Calculate the total inventory value (price * quantity for each item)
5. Display a formatted table and the total value

**Sample CSV:**
```
Name,Price,Quantity
Widget,9.99,100
Gadget,24.99,50
Gizmo,14.99,75
Tool,19.99,30
Part,4.99,200
```

**Hint:** Use getline with comma delimiter or stringstream to parse each line.

---

## Challenge Problems

### Challenge 1: Search and Replace
Write a program that:
1. Reads a text file
2. Asks the user for a word to find and a replacement word
3. Creates a new file with all occurrences replaced
4. Reports how many replacements were made

### Challenge 2: File Merger
Write a program that:
1. Takes two input file names
2. Reads both files
3. Creates a third file that contains the contents of both files
4. First file's content comes first, then a separator line, then the second file's content

### Challenge 3: Data Validator
Write a program that:
1. Reads a file containing numbers (one per line)
2. Identifies and reports any invalid entries (non-numeric values)
3. Writes only the valid numbers to a new "cleaned" file
4. Reports statistics: valid count, invalid count, sum of valid numbers

---

## Self-Assessment Checklist

After completing these problems, you should be able to:
- [ ] Create files and write data to them
- [ ] Read files line by line or value by value
- [ ] Handle file open errors gracefully
- [ ] Use append mode to add to existing files
- [ ] Work with structured data in files
- [ ] Parse CSV-formatted data
- [ ] Calculate statistics from file data
- [ ] Copy and transform file contents
