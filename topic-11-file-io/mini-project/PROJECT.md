# Mini-Project: Personal Journal Application

## Overview
Create a personal journal application that allows users to write, save, and read journal entries. Each entry is saved with a date and can be viewed later.

## Learning Objectives
- Practice writing data to files
- Practice reading data from files
- Use append mode to add to existing files
- Handle file errors gracefully
- Work with structured text data

## Requirements

### Core Features

1. **Add New Entry**
   - Prompt user for journal entry text
   - Automatically add current date/time stamp
   - Append entry to journal file
   - Confirm entry was saved

2. **View All Entries**
   - Read and display all journal entries
   - Show date and content for each entry
   - Handle case where no entries exist

3. **View Recent Entries**
   - Show only the last 5 entries
   - Display in reverse chronological order (newest first)

4. **Search Entries**
   - Allow user to search for a keyword
   - Display all entries containing that keyword

5. **Entry Count**
   - Display total number of entries in the journal

### File Format
Each journal entry should be stored in this format:
```
---ENTRY---
Date: [date string]
[entry text]
---END---
```

### Menu System
```
===== PERSONAL JOURNAL =====
1. Add new entry
2. View all entries
3. View recent entries (last 5)
4. Search entries
5. Entry count
6. Exit
============================
Choice:
```

## Starter Code Structure

The starter code provides:
- Menu loop structure
- Function declarations
- File name constant
- Basic input handling

You need to implement:
- `addEntry()` - Write a new entry to the file
- `viewAllEntries()` - Read and display all entries
- `viewRecentEntries()` - Show last 5 entries
- `searchEntries()` - Find entries with a keyword
- `countEntries()` - Count total entries

## Example Session

```
===== PERSONAL JOURNAL =====
1. Add new entry
2. View all entries
3. View recent entries (last 5)
4. Search entries
5. Entry count
6. Exit
============================
Choice: 1

Enter your journal entry (press Enter when done):
Today was a great day! I learned about file I/O in C++.

Entry saved successfully!

===== PERSONAL JOURNAL =====
1. Add new entry
2. View all entries
...
Choice: 2

===== ALL JOURNAL ENTRIES =====

--- Entry 1 ---
Date: December 31, 2025
Today was a great day! I learned about file I/O in C++.

===============================
Total entries: 1

===== PERSONAL JOURNAL =====
...
Choice: 4

Enter search keyword: C++

===== SEARCH RESULTS =====
Found 1 entry containing "C++":

--- Entry 1 ---
Date: December 31, 2025
Today was a great day! I learned about file I/O in C++.

===========================
```

## Hints

1. **Reading entries:** Use a marker like "---ENTRY---" to identify where each entry starts
2. **Counting entries:** Count how many times the entry marker appears
3. **Recent entries:** Store entries in an array while reading, then display the last 5
4. **Searching:** Read each entry and check if it contains the search term
5. **Date handling:** You can use a simple string for the date or simulate it

## Extension Challenges

1. **Delete Entry:** Add ability to delete a specific entry
2. **Edit Entry:** Allow editing of existing entries
3. **Export:** Create a formatted text file of all entries
4. **Categories:** Add category tags to entries
5. **Word Count:** Show word count statistics for entries

## Grading Rubric

| Criteria | Points |
|----------|--------|
| Add entry works correctly | 20 |
| View all entries works | 20 |
| View recent entries works | 15 |
| Search functionality works | 20 |
| Entry count is accurate | 10 |
| Error handling (file not found, etc.) | 10 |
| Code style and comments | 5 |
| **Total** | **100** |

## Submission
Submit your completed `main.cpp` file with all functions implemented.
