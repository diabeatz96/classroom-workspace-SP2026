# Topic 10: Introduction to Raylib (Special Topic)

## Overview

Raylib is a simple and easy-to-use library for creating graphical desktop applications and games. In this special topic, you will learn the fundamentals of graphics programming using Raylib, allowing you to create visual programs beyond the console.

## What You Will Learn

- Setting up Raylib in your development environment
- Understanding the game loop (init, update, draw, close)
- Creating windows and handling basic input
- Drawing shapes, text, and colors
- Working with images and textures
- Basic animation and movement
- Responding to keyboard and mouse input

## Prerequisites

Before starting this topic, you should be comfortable with:
- Variables and data types (Topic 02)
- Selection statements (Topic 04)
- Loops (Topic 05)
- Functions (Topic 06)

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
- [Simple Game](mini-project/PROJECT.md) - Create a simple interactive game

## Setting Up Raylib

### Windows (Visual Studio)
1. Download Raylib from [raylib.com](https://www.raylib.com/)
2. Use the Windows Installer or extract the library files
3. Configure your project to link against raylib.lib
4. Include `raylib.h` in your source files

### Windows (MinGW/GCC)
```bash
# Using w64devkit or similar
gcc -o game main.cpp -lraylib -lopengl32 -lgdi32 -lwinmm
```

### Using Raylib with an IDE Template
Many IDEs have Raylib project templates available. Check the Raylib GitHub wiki for setup guides specific to your environment.

## Key Concepts at a Glance

### The Game Loop
```cpp
InitWindow(800, 600, "My Game");  // Initialize
while (!WindowShouldClose()) {    // Main loop
    // Update game logic here

    BeginDrawing();               // Start drawing
    ClearBackground(RAYWHITE);
    // Draw things here
    EndDrawing();                 // End drawing
}
CloseWindow();                    // Cleanup
```

### Common Functions
| Function | Purpose |
|----------|---------|
| `InitWindow()` | Create the game window |
| `CloseWindow()` | Close and cleanup |
| `BeginDrawing()` | Start the drawing phase |
| `EndDrawing()` | End drawing and display |
| `ClearBackground()` | Clear screen with a color |
| `DrawRectangle()` | Draw a rectangle |
| `DrawCircle()` | Draw a circle |
| `DrawText()` | Draw text on screen |
| `IsKeyDown()` | Check if key is pressed |
| `GetMousePosition()` | Get mouse coordinates |

### Colors
Raylib provides predefined colors:
- `WHITE`, `BLACK`, `GRAY`, `DARKGRAY`, `LIGHTGRAY`
- `RED`, `GREEN`, `BLUE`, `YELLOW`, `ORANGE`, `PINK`, `PURPLE`
- `RAYWHITE` (slightly off-white, good for backgrounds)

## Duration

This special topic can be completed in 1-2 weeks depending on your pace.

## Why Learn Raylib?

- **Simple API**: Easy to learn, well-documented functions
- **Cross-platform**: Works on Windows, Mac, Linux, and more
- **No dependencies**: Self-contained library
- **Great for learning**: Perfect introduction to graphics programming
- **Portfolio projects**: Create visual projects to showcase your skills

## Next Steps

After completing this topic, you can:
- Create more complex games with multiple scenes
- Add sound effects and music
- Explore 3D graphics with Raylib
- Learn other game frameworks (SDL, SFML, etc.)
