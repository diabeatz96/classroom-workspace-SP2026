# How to Run C++ Files

This guide explains how to compile and run the C++ files in this repository using different development environments.

---

## Table of Contents
1. [Visual Studio (Windows)](#visual-studio-windows)
2. [VS Code (Windows, Mac, Linux)](#vs-code-windows-mac-linux)
3. [Xcode (Mac)](#xcode-mac)
4. [Command Line (Terminal)](#command-line-terminal)
5. [Replit (Browser-Based)](#replit-browser-based)
6. [Common Issues](#common-issues)

---

## Visual Studio (Windows)

Visual Studio Community is the recommended IDE for Windows users.

### First-Time Setup

1. Download Visual Studio Community from [visualstudio.microsoft.com](https://visualstudio.microsoft.com/downloads/)
2. During installation, select **"Desktop development with C++"** workload
3. Complete the installation (this may take 15-30 minutes)

### Running a Single C++ File

**Method 1: Open Folder (Recommended)**
1. Open Visual Studio
2. Click **"Open a local folder"**
3. Navigate to this repository folder and open it
4. In the Solution Explorer, find the `.cpp` file you want to run
5. Right-click the file and select **"Set as Startup Item"**
6. Press **Ctrl+F5** to run (or **F5** to run with debugging)

**Method 2: Create a New Project**
1. File > New > Project
2. Select **"Empty Project"** under C++
3. Give it a name and create
4. Right-click "Source Files" in Solution Explorer
5. Add > Existing Item > Navigate to the `.cpp` file
6. Press **Ctrl+F5** to run

### Keyboard Shortcuts
| Action | Shortcut |
|--------|----------|
| Run without debugging | Ctrl+F5 |
| Run with debugging | F5 |
| Build | Ctrl+Shift+B |
| Stop | Shift+F5 |

---

## VS Code (Windows, Mac, Linux)

VS Code is a lightweight, cross-platform editor that works on all operating systems.

### First-Time Setup

1. Download VS Code from [code.visualstudio.com](https://code.visualstudio.com/)
2. Install the **C/C++ extension** by Microsoft:
   - Open VS Code
   - Press **Ctrl+Shift+X** (or Cmd+Shift+X on Mac)
   - Search for "C/C++"
   - Install the extension by Microsoft

3. Install a C++ compiler:

   **Windows:**
   - Install MinGW-w64 from [winlibs.com](https://winlibs.com/)
   - Extract to `C:\mingw64`
   - Add `C:\mingw64\bin` to your PATH environment variable

   **Mac:**
   - Open Terminal
   - Run: `xcode-select --install`

   **Linux:**
   - Open Terminal
   - Run: `sudo apt install g++` (Ubuntu/Debian)
   - Or: `sudo dnf install gcc-c++` (Fedora)

### Running a C++ File

**Method 1: Code Runner Extension (Easiest)**
1. Install the **"Code Runner"** extension
2. Open a `.cpp` file
3. Press **Ctrl+Alt+N** (or Cmd+Option+N on Mac) to run
4. Output appears in the OUTPUT panel

**Method 2: Terminal**
1. Open the folder in VS Code (File > Open Folder)
2. Open a terminal (Terminal > New Terminal)
3. Navigate to the file location:
   ```bash
   cd topic-01-output/lesson/examples
   ```
4. Compile and run:
   ```bash
   g++ ex1_hello.cpp -o ex1_hello
   ./ex1_hello
   ```
   On Windows:
   ```bash
   g++ ex1_hello.cpp -o ex1_hello.exe
   ex1_hello.exe
   ```

**Method 3: Tasks Configuration**
1. Press **Ctrl+Shift+B** to build
2. If prompted, select "g++ - Build active file"
3. This creates a configuration for building C++ files

### Keyboard Shortcuts
| Action | Shortcut |
|--------|----------|
| Run (Code Runner) | Ctrl+Alt+N |
| Open Terminal | Ctrl+` |
| Build | Ctrl+Shift+B |
| Stop | Ctrl+C (in terminal) |

---

## Xcode (Mac)

Xcode is Apple's official IDE for Mac.

### First-Time Setup

1. Open the App Store and search for "Xcode"
2. Install Xcode (large download, may take time)
3. Open Xcode and accept the license agreement
4. Install additional components when prompted

### Running a Single C++ File

**Method 1: Command Line Tool Project**
1. Open Xcode
2. File > New > Project
3. Select **"macOS"** tab, then **"Command Line Tool"**
4. Set Language to **"C++"**
5. Name your project and create it
6. Replace `main.cpp` content with the code you want to run
7. Press **Cmd+R** to run

**Method 2: Use Terminal (Simpler)**
1. Open Terminal (Applications > Utilities > Terminal)
2. Navigate to the file:
   ```bash
   cd path/to/repository/topic-01-output/lesson/examples
   ```
3. Compile and run:
   ```bash
   g++ ex1_hello.cpp -o ex1_hello
   ./ex1_hello
   ```

### Keyboard Shortcuts
| Action | Shortcut |
|--------|----------|
| Run | Cmd+R |
| Build | Cmd+B |
| Stop | Cmd+. |

---

## Command Line (Terminal)

The command line works on all platforms and gives you direct control.

### Prerequisites

Make sure you have a C++ compiler installed:

**Check if g++ is installed:**
```bash
g++ --version
```

If not installed, see the VS Code section above for installation instructions.

### Basic Workflow

1. **Open a terminal**
   - Windows: Command Prompt or PowerShell
   - Mac: Terminal (Applications > Utilities)
   - Linux: Terminal

2. **Navigate to the file location**
   ```bash
   cd path/to/classroom-workspace-SP2026/topic-01-output/lesson/examples
   ```

3. **Compile the code**
   ```bash
   g++ ex1_hello.cpp -o ex1_hello
   ```
   This creates an executable named `ex1_hello` (or `ex1_hello.exe` on Windows)

4. **Run the executable**
   ```bash
   ./ex1_hello        # Mac/Linux
   ex1_hello.exe      # Windows
   ```

### Compile and Run in One Command

**Mac/Linux:**
```bash
g++ filename.cpp -o output && ./output
```

**Windows:**
```bash
g++ filename.cpp -o output.exe && output.exe
```

### Useful Compiler Options

| Option | Description |
|--------|-------------|
| `-o name` | Set output file name |
| `-std=c++17` | Use C++17 standard |
| `-Wall` | Enable all warnings |
| `-g` | Enable debugging info |

**Example with options:**
```bash
g++ -std=c++17 -Wall my_program.cpp -o my_program
```

---

## Replit (Browser-Based)

Replit is perfect if you cannot install software on your computer.

### Getting Started

1. Go to [replit.com](https://replit.com/)
2. Create a free account
3. Click **"+ Create"**
4. Select **"C++"** as the language
5. Name your Repl and click Create

### Running Code

1. Delete the default `main.cpp` content
2. Copy and paste the code from a file in this repository
3. Click the green **"Run"** button at the top
4. Output appears in the Console panel on the right

### Multiple Files

To test different files:
1. Keep creating new Repls for each file, OR
2. Copy-paste different code into the same `main.cpp` and run

### Keyboard Shortcuts
| Action | Shortcut |
|--------|----------|
| Run | Ctrl+Enter |
| Save | Ctrl+S |

---

## Running Raylib Programs (Topic 10)

Raylib programs require additional setup because they use a graphics library.

### Windows with Visual Studio

1. Download raylib from [raylib.com](https://www.raylib.com/)
2. Use the raylib Visual Studio project template:
   - Download from the raylib website
   - Open the template project
   - Replace `main.cpp` with your code
   - Build and run

### Windows with VS Code

1. Install raylib using vcpkg or download pre-built binaries
2. Configure your `tasks.json` to link raylib:
   ```json
   "args": [
       "-g", "${file}",
       "-o", "${fileDirname}/${fileBasenameNoExtension}",
       "-lraylib", "-lopengl32", "-lgdi32", "-lwinmm"
   ]
   ```

### Mac

1. Install raylib via Homebrew:
   ```bash
   brew install raylib
   ```
2. Compile with:
   ```bash
   g++ game.cpp -o game -lraylib -framework OpenGL -framework Cocoa -framework IOKit
   ```

### Linux

1. Install raylib:
   ```bash
   sudo apt install libraylib-dev
   ```
2. Compile with:
   ```bash
   g++ game.cpp -o game -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
   ```

---

## Common Issues

### "Command not found: g++"
- The compiler is not installed or not in your PATH
- See the setup instructions for your platform above

### "No such file or directory"
- Make sure you are in the correct directory
- Use `ls` (Mac/Linux) or `dir` (Windows) to see files in current folder
- Use `pwd` to see your current directory

### "Undefined reference" errors
- You are missing a library
- For standard programs, this usually means a typo in your code
- For raylib programs, you need to link the raylib library

### Program runs but window closes immediately
- Add a pause at the end of your program:
  ```cpp
  cin.get();  // Wait for Enter key
  ```
- Or run from the terminal instead of double-clicking the executable

### Input not working correctly
- Make sure you are running in a proper terminal, not just the Output window
- In VS Code, use the Terminal panel, not the Output panel

### "Permission denied" (Mac/Linux)
- Make the file executable:
  ```bash
  chmod +x ./program_name
  ```

---

## Quick Reference

### Compile and Run (Most Common)

| Platform | Compile | Run |
|----------|---------|-----|
| Windows | `g++ file.cpp -o file.exe` | `file.exe` |
| Mac/Linux | `g++ file.cpp -o file` | `./file` |

### IDE Run Commands

| IDE | Run Command |
|-----|-------------|
| Visual Studio | Ctrl+F5 |
| VS Code (Code Runner) | Ctrl+Alt+N |
| Xcode | Cmd+R |
| Replit | Ctrl+Enter or Run button |

---

## Need More Help?

- Check the [getting-started](getting-started/) folder for detailed setup guides
- See [resources/common-errors.md](resources/common-errors.md) for debugging help
- Ask during office hours or email your instructor
