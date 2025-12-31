# Mac Setup Guide

This guide covers two options for Mac users: Xcode and VS Code. Choose the one that works best for you.

---

## Option A: Xcode (Recommended for Mac Users)

Xcode is Apple's official development environment. It is free and includes everything you need.

### Step 1: Install Xcode

1. Open the **App Store** on your Mac
2. Search for "Xcode"
3. Click **Get** and then **Install**
4. Wait for the download (Xcode is large, about 12GB)
5. Open Xcode once to accept the license agreement

### Step 2: Install Command Line Tools

1. Open **Terminal** (find it in Applications > Utilities)
2. Type: `xcode-select --install`
3. Click **Install** in the popup window
4. Wait for the installation to complete

### Step 3: Create Your First Project

1. Open Xcode
2. Click **"Create a new Xcode project"**
3. Select **macOS** at the top
4. Choose **"Command Line Tool"** and click **Next**
5. Enter a product name (e.g., "HelloWorld")
6. Make sure Language is set to **C++**
7. Choose a location to save and click **Create**

### Step 4: Write and Run Code

Xcode creates a `main.cpp` file with starter code. Replace it with:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << '\n';
    return 0;
}
```

To run:
1. Press **Cmd + R** (or click the Play button)
2. The output appears in the bottom panel

### Xcode Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| Run | Cmd + R |
| Build | Cmd + B |
| Comment/Uncomment | Cmd + / |
| Go to line | Cmd + L |

---

## Option B: VS Code with C++ Extension

VS Code is a lightweight editor that works on all platforms. This setup requires a few more steps but gives you a modern coding experience.

### Step 1: Install Command Line Tools

1. Open **Terminal** (Applications > Utilities)
2. Type: `xcode-select --install`
3. Click **Install** and wait for completion

This installs the clang++ compiler without needing full Xcode.

### Step 2: Install VS Code

1. Go to [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Download the Mac version
3. Open the downloaded .zip file
4. Drag **Visual Studio Code** to your Applications folder
5. Open VS Code

### Step 3: Install the C++ Extension

1. In VS Code, click the Extensions icon in the left sidebar (or press Cmd + Shift + X)
2. Search for "C/C++"
3. Install the extension by Microsoft (it has millions of downloads)

### Step 4: Create Your First Program

1. Create a folder for your coursework (e.g., `~/CSC126/`)
2. In VS Code, click **File > Open Folder** and select your folder
3. Click **File > New File**
4. Save it as `hello.cpp`
5. Type this code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << '\n';
    return 0;
}
```

### Step 5: Compile and Run from Terminal

1. Open the integrated terminal in VS Code: **View > Terminal** (or Ctrl + `)
2. Compile your program:
   ```
   g++ -Wall -Wextra -o hello hello.cpp
   ```
3. Run it:
   ```
   ./hello
   ```

You should see "Hello, World!" printed.

### Understanding the Compile Command

- `g++` - The C++ compiler
- `-Wall -Wextra` - Enable warnings to catch potential bugs
- `-o hello` - Name the output file "hello"
- `hello.cpp` - The source file to compile

### VS Code Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| Open terminal | Ctrl + ` |
| Save file | Cmd + S |
| Comment/Uncomment | Cmd + / |
| Open folder | Cmd + O |

---

## Common Issues and Solutions

### "xcrun: error: invalid active developer path"
Run this in Terminal:
```
xcode-select --install
```

### "g++: command not found"
The command line tools are not installed. Run:
```
xcode-select --install
```

### VS Code does not recognize C++ files
Make sure you installed the C/C++ extension from Microsoft.

### Program runs but output disappears
In VS Code, output stays in the terminal. In Xcode, check the bottom panel.

---

## File Organization

Keep your coursework organized:

```
~/CSC126/
├── topic-01/
│   ├── hello.cpp
│   ├── exercise1.cpp
│   └── mini-project.cpp
├── topic-02/
│   └── ...
└── ...
```

## Next Steps

Once you have successfully run "Hello, World!", proceed to the [first-program](first-program/) folder to complete the verification exercise.
