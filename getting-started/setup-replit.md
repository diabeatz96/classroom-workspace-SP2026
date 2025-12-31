# Replit Setup Guide

Replit is a browser-based development environment. No installation required - you can start coding immediately from any computer.

## Step 1: Create an Account

1. Go to [https://replit.com/](https://replit.com/)
2. Click **Sign Up**
3. You can sign up with:
   - Google account (easiest)
   - GitHub account
   - Email address
4. Complete the signup process

## Step 2: Create Your First Repl

1. Click the **+ Create Repl** button (or **+ Create** in the sidebar)
2. In the Template dropdown, search for **"C++"**
3. Select the **C++** template
4. Give your Repl a name (e.g., "HelloWorld")
5. Click **Create Repl**

## Step 3: Write and Run Code

Replit creates a `main.cpp` file with some starter code. Replace it with:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << '\n';
    return 0;
}
```

To run:
1. Click the green **Run** button at the top
2. The output appears in the Console panel on the right

## Replit Interface Overview

```
+------------------+-------------------+
|                  |                   |
|   Files Panel    |    Editor         |
|   (left)         |    (center)       |
|                  |                   |
+------------------+-------------------+
|                                      |
|   Console / Shell (bottom/right)     |
|                                      |
+--------------------------------------+
```

- **Files Panel:** Shows all files in your project
- **Editor:** Where you write code
- **Console:** Shows program output
- **Shell:** Command line access (for advanced use)

## Creating Multiple Files

For larger projects, you may need multiple files:

1. Click the **+** icon in the Files panel
2. Select **New file**
3. Name it with a `.cpp` extension (e.g., `functions.cpp`)

## Organizing Your Coursework

Create a separate Repl for each exercise or project:

- HelloWorld
- Topic01-Exercise1
- Topic01-MiniProject
- Topic02-Exercise1
- ...

Or create folders within a single Repl:

1. Click the **+** icon in the Files panel
2. Select **New folder**
3. Name the folder (e.g., "topic-01")
4. Create files inside that folder

## Enabling Compiler Warnings

By default, Replit does not show all warnings. To enable them:

1. Create a file called `.replit` in your project (if it does not exist)
2. Find or add the `compile` line and modify it:

```
compile = "g++ -Wall -Wextra -o main main.cpp"
run = "./main"
```

Or use the Shell to compile manually:
```
g++ -Wall -Wextra -o main main.cpp && ./main
```

## Getting User Input

Programs that use `cin` work in Replit. When you run the program, type your input in the Console panel and press Enter.

Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!\n";
    return 0;
}
```

## Common Issues and Solutions

### "Compilation error" with no details
- Check for missing semicolons
- Check for mismatched braces { }
- Look at the Console for error messages

### Program does not wait for input
- Make sure you click in the Console panel before typing
- Press Enter after typing your input

### Changes not showing when I run
- Make sure you saved the file (Ctrl/Cmd + S)
- Replit usually auto-saves, but check the dot on the file tab

### Repl is slow or unresponsive
- Free Replit accounts have limited resources
- Try refreshing the page
- Create a new Repl if the problem persists

## Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| Run | Ctrl/Cmd + Enter |
| Save | Ctrl/Cmd + S |
| Comment/Uncomment | Ctrl/Cmd + / |
| Find | Ctrl/Cmd + F |
| Find and Replace | Ctrl/Cmd + H |

## Limitations of Replit

- Requires internet connection
- Free tier has limited computing resources
- Some advanced debugging features are not available
- May be slower than a local development environment

## When to Use Replit vs Local Setup

**Use Replit when:**
- You are on a Chromebook
- You want to code from multiple computers
- You do not want to install software
- You are just getting started and want simplicity

**Consider a local setup when:**
- You have a reliable computer you always use
- You want faster compilation
- You need advanced debugging
- You want to work offline

## Sharing Your Code

To share a Repl with the instructor or classmates:
1. Click the **Share** button (top right)
2. Copy the link
3. Anyone with the link can view your code

For submissions, follow your instructor's specific guidelines.

## Next Steps

Once you have successfully run "Hello, World!", proceed to the [first-program](first-program/) folder to complete the verification exercise.
