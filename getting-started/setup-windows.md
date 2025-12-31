# Windows Setup Guide

This guide will help you install Visual Studio Community and set up your C++ development environment on Windows.

## Step 1: Download Visual Studio Community

1. Go to [https://visualstudio.microsoft.com/vs/community/](https://visualstudio.microsoft.com/vs/community/)
2. Click the "Free download" button
3. Run the downloaded installer (vs_community.exe)

## Step 2: Install Visual Studio

1. When the installer opens, you will see a list of "Workloads"
2. Check the box for **"Desktop development with C++"**
3. On the right side, make sure these are selected:
   - MSVC v143 (or latest version)
   - Windows 10/11 SDK
   - C++ CMake tools (optional but useful)
4. Click **Install**
5. Wait for the installation to complete (this may take 20-30 minutes)

## Step 3: Create Your First Project

1. Open Visual Studio
2. Click **"Create a new project"**
3. Search for "Console App" and select **"Console App"** (make sure it says C++ underneath)
4. Click **Next**
5. Enter a project name (e.g., "HelloWorld")
6. Choose a location to save your projects (create a folder like `C:\CSC126\`)
7. Click **Create**

## Step 4: Write and Run Code

Visual Studio creates a starter file with some code. Replace it with:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << '\n';
    return 0;
}
```

To run the program:
1. Press **Ctrl + F5** (or click Debug > Start Without Debugging)
2. A console window should appear showing "Hello, World!"
3. Press any key to close the window

## Enabling Compiler Warnings

Good programmers enable compiler warnings to catch potential bugs. To do this:

1. Right-click on your project name in the Solution Explorer
2. Select **Properties**
3. Go to **C/C++ > General**
4. Set **Warning Level** to **Level4 (/W4)**
5. Click **Apply** and **OK**

## Common Issues and Solutions

### "No C++ compiler found"
- Go back to the Visual Studio Installer
- Click **Modify** on your installation
- Make sure "Desktop development with C++" is checked
- Click **Modify** to install the missing components

### Console window closes immediately
- Use **Ctrl + F5** instead of F5
- Or add `cin.get();` before `return 0;` to pause the program

### "Cannot open file" errors
- Make sure you saved your file before running
- Check that the file has a .cpp extension

### Build errors with red squiggles
- Read the error message in the Output window at the bottom
- The Error List window shows all errors - double-click to go to the line

## File Organization

Keep your coursework organized:

```
C:\CSC126\
├── topic-01\
│   ├── HelloWorld\
│   ├── exercise1\
│   └── mini-project\
├── topic-02\
│   └── ...
└── ...
```

Each Visual Studio project creates a folder with several files. The important ones are:
- `ProjectName.cpp` - Your source code
- `ProjectName.sln` - The solution file (double-click to open the project)

## Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| Run without debugging | Ctrl + F5 |
| Run with debugging | F5 |
| Build solution | Ctrl + Shift + B |
| Comment selected lines | Ctrl + K, Ctrl + C |
| Uncomment selected lines | Ctrl + K, Ctrl + U |
| Auto-format code | Ctrl + K, Ctrl + D |
| Go to line | Ctrl + G |

## Next Steps

Once you have successfully run "Hello, World!", proceed to the [first-program](first-program/) folder to complete the verification exercise.
