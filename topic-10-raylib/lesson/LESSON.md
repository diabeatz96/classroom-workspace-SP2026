# Topic 10: Introduction to Raylib

## Learning Objectives

After completing this lesson, you will be able to:
- Set up a Raylib project and create a window
- Understand and implement the game loop pattern
- Draw basic shapes (rectangles, circles, lines, triangles)
- Display text on the screen
- Handle keyboard and mouse input
- Create simple animations using position updates
- Work with colors and basic game states

---

## Part 1: What is Raylib?

### Introduction

Raylib is a simple, easy-to-use library for creating games and graphical applications. Unlike console programs that only display text, Raylib lets you:

- Create windows with graphics
- Draw shapes, images, and text
- Respond to mouse and keyboard in real-time
- Create animations and interactive programs

### Why Raylib?

- **Beginner-friendly**: Simple function names that make sense
- **Well-documented**: Excellent examples and cheat sheets
- **Cross-platform**: Works on Windows, Mac, Linux
- **Free and open-source**: No cost, no licensing issues

### Including Raylib

To use Raylib, include its header file:

```cpp
#include "raylib.h"
```

Note: Unlike standard C++ headers, Raylib uses quotes and the `.h` extension.

---

## Part 2: The Game Loop

### Understanding the Pattern

Every graphical application follows a similar pattern:

1. **Initialize**: Set up the window and load resources
2. **Loop**: Repeat until the user quits
   - Update: Process input and update game state
   - Draw: Render everything to the screen
3. **Cleanup**: Free resources and close the window

### Basic Structure

```cpp
#include "raylib.h"

int main() {
    // 1. INITIALIZATION
    InitWindow(800, 600, "My First Raylib Program");
    SetTargetFPS(60);  // Aim for 60 frames per second

    // 2. GAME LOOP
    while (!WindowShouldClose()) {  // Loop until user closes window
        // UPDATE PHASE
        // (Handle input, update positions, check collisions, etc.)

        // DRAW PHASE
        BeginDrawing();
            ClearBackground(RAYWHITE);
            // Draw everything here
        EndDrawing();
    }

    // 3. CLEANUP
    CloseWindow();

    return 0;
}
```

### Key Functions Explained

| Function | Purpose |
|----------|---------|
| `InitWindow(width, height, title)` | Creates the game window |
| `SetTargetFPS(fps)` | Limits frame rate (usually 60) |
| `WindowShouldClose()` | Returns true when user clicks X or presses ESC |
| `BeginDrawing()` | Starts the drawing phase |
| `ClearBackground(color)` | Fills screen with a color |
| `EndDrawing()` | Finishes drawing and displays the frame |
| `CloseWindow()` | Cleans up and closes the window |

---

## Part 3: Drawing Shapes

### Coordinate System

Raylib uses a coordinate system where:
- **(0, 0)** is the **top-left** corner
- **X increases** going **right**
- **Y increases** going **down**

```
(0,0) -------- X+ -------->
  |
  |
  Y+
  |
  |
  v
```

### Drawing Rectangles

```cpp
// DrawRectangle(x, y, width, height, color)
DrawRectangle(100, 100, 200, 150, RED);

// Draw just the outline
DrawRectangleLines(100, 100, 200, 150, BLUE);
```

### Drawing Circles

```cpp
// DrawCircle(centerX, centerY, radius, color)
DrawCircle(400, 300, 50, GREEN);

// Draw just the outline
DrawCircleLines(400, 300, 50, DARKGREEN);
```

### Drawing Lines

```cpp
// DrawLine(startX, startY, endX, endY, color)
DrawLine(0, 0, 800, 600, BLACK);

// Draw a thicker line
DrawLineEx({0, 0}, {800, 600}, 3.0f, BLACK);
```

### Drawing Triangles

```cpp
// DrawTriangle(v1, v2, v3, color)
// Points must be in counter-clockwise order!
DrawTriangle(
    {400, 100},   // Top point
    {300, 300},   // Bottom-left
    {500, 300},   // Bottom-right
    PURPLE
);
```

---

## Part 4: Colors

### Predefined Colors

Raylib provides many built-in colors:

```cpp
// Grayscale
WHITE, BLACK, GRAY, DARKGRAY, LIGHTGRAY

// Primary colors
RED, GREEN, BLUE

// Other colors
YELLOW, ORANGE, PINK, PURPLE, VIOLET
GOLD, SKYBLUE, LIME, MAROON, BEIGE

// Special
RAYWHITE  // Slightly off-white, great for backgrounds
BLANK     // Transparent
```

### Custom Colors

Create your own colors using RGBA (Red, Green, Blue, Alpha):

```cpp
// Color format: {red, green, blue, alpha}
// Values range from 0 to 255
Color myRed = {255, 0, 0, 255};      // Solid red
Color myBlue = {0, 0, 255, 128};     // Semi-transparent blue
Color coral = {255, 127, 80, 255};   // Coral color
```

### Using Colors

```cpp
Color playerColor = {100, 149, 237, 255};  // Cornflower blue
DrawRectangle(100, 100, 50, 50, playerColor);
```

---

## Part 5: Drawing Text

### Basic Text

```cpp
// DrawText(text, x, y, fontSize, color)
DrawText("Hello, Raylib!", 100, 100, 20, BLACK);

// Larger text
DrawText("GAME OVER", 300, 250, 60, RED);
```

### Centering Text

To center text, you need to measure its width:

```cpp
const char* title = "Welcome to My Game";
int fontSize = 40;

// MeasureText returns the width in pixels
int textWidth = MeasureText(title, fontSize);

// Center horizontally (assuming 800px window width)
int x = (800 - textWidth) / 2;
DrawText(title, x, 100, fontSize, BLACK);
```

### Displaying Numbers

To display numbers, convert them to strings:

```cpp
int score = 1500;
DrawText(TextFormat("Score: %d", score), 10, 10, 20, BLACK);

float health = 75.5f;
DrawText(TextFormat("Health: %.1f%%", health), 10, 40, 20, RED);
```

---

## Part 6: Keyboard Input

### Checking Key States

```cpp
// IsKeyDown - true while key is held down
if (IsKeyDown(KEY_RIGHT)) {
    playerX += 5;  // Move right continuously
}

// IsKeyPressed - true only once when key is first pressed
if (IsKeyPressed(KEY_SPACE)) {
    Jump();  // Jump once per press
}

// IsKeyReleased - true only when key is released
if (IsKeyReleased(KEY_SPACE)) {
    // Do something when space is released
}
```

### Common Key Codes

```cpp
// Arrow keys
KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT

// Letters
KEY_A, KEY_B, KEY_C, ... KEY_Z

// Numbers
KEY_ZERO, KEY_ONE, ... KEY_NINE

// Special keys
KEY_SPACE, KEY_ENTER, KEY_ESCAPE
KEY_BACKSPACE, KEY_TAB
KEY_LEFT_SHIFT, KEY_LEFT_CONTROL
```

### Example: Moving a Rectangle

```cpp
int playerX = 400;
int playerY = 300;
int speed = 5;

// In the update phase:
if (IsKeyDown(KEY_RIGHT)) playerX += speed;
if (IsKeyDown(KEY_LEFT))  playerX -= speed;
if (IsKeyDown(KEY_DOWN))  playerY += speed;
if (IsKeyDown(KEY_UP))    playerY -= speed;

// In the draw phase:
DrawRectangle(playerX, playerY, 50, 50, BLUE);
```

---

## Part 7: Mouse Input

### Mouse Position

```cpp
// Get current mouse position
int mouseX = GetMouseX();
int mouseY = GetMouseY();

// Or as a Vector2
Vector2 mousePos = GetMousePosition();
// Access with mousePos.x and mousePos.y
```

### Mouse Buttons

```cpp
// IsMouseButtonDown - true while button is held
if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
    // Holding left click
}

// IsMouseButtonPressed - true once when clicked
if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    // Just clicked
}

// Button constants
MOUSE_BUTTON_LEFT
MOUSE_BUTTON_RIGHT
MOUSE_BUTTON_MIDDLE
```

### Example: Click to Place Circles

```cpp
// Store placed circles
int circleX[100];
int circleY[100];
int circleCount = 0;

// In update phase:
if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && circleCount < 100) {
    circleX[circleCount] = GetMouseX();
    circleY[circleCount] = GetMouseY();
    circleCount++;
}

// In draw phase:
for (int i = 0; i < circleCount; i++) {
    DrawCircle(circleX[i], circleY[i], 20, RED);
}
```

---

## Part 8: Simple Animation

### Frame-Based Movement

Objects move by changing their position each frame:

```cpp
float ballX = 100;
float ballY = 300;
float speedX = 4;
float speedY = 3;

// In update phase:
ballX += speedX;
ballY += speedY;

// Bounce off walls
if (ballX <= 0 || ballX >= 800) speedX *= -1;
if (ballY <= 0 || ballY >= 600) speedY *= -1;

// In draw phase:
DrawCircle(ballX, ballY, 20, RED);
```

### Using Delta Time

For smoother, frame-rate independent movement:

```cpp
float playerX = 400;
float speed = 200;  // Pixels per second

// In update phase:
float dt = GetFrameTime();  // Time since last frame

if (IsKeyDown(KEY_RIGHT)) {
    playerX += speed * dt;
}
```

---

## Part 9: Game States

### Managing Different Screens

Use an enum or int to track the current game state:

```cpp
enum GameState {
    MENU,
    PLAYING,
    GAME_OVER
};

GameState currentState = MENU;

// In the game loop:
switch (currentState) {
    case MENU:
        // Draw menu, check for start button
        if (IsKeyPressed(KEY_ENTER)) {
            currentState = PLAYING;
        }
        break;

    case PLAYING:
        // Update and draw the game
        if (playerDied) {
            currentState = GAME_OVER;
        }
        break;

    case GAME_OVER:
        // Draw game over screen
        if (IsKeyPressed(KEY_R)) {
            // Reset game
            currentState = PLAYING;
        }
        break;
}
```

---

## Common Mistakes to Avoid

1. **Forgetting BeginDrawing/EndDrawing**
   ```cpp
   // WRONG - nothing will display
   ClearBackground(WHITE);
   DrawCircle(100, 100, 50, RED);

   // CORRECT
   BeginDrawing();
   ClearBackground(WHITE);
   DrawCircle(100, 100, 50, RED);
   EndDrawing();
   ```

2. **Drawing outside the loop**
   ```cpp
   // WRONG - draws only once
   BeginDrawing();
   DrawCircle(100, 100, 50, RED);
   EndDrawing();

   while (!WindowShouldClose()) { }
   ```

3. **Coordinate confusion**
   ```cpp
   // Remember: Y increases downward!
   // (0,0) is top-left, not bottom-left
   ```

4. **Forgetting to clear the background**
   ```cpp
   // Without ClearBackground, previous frames remain visible
   // This causes "smearing" effects
   ```

---

## Practice Checklist

Before moving to the exercises, make sure you can:

- [ ] Create a window with InitWindow
- [ ] Implement the basic game loop structure
- [ ] Draw rectangles, circles, and lines
- [ ] Display text on the screen
- [ ] Handle keyboard input with IsKeyDown
- [ ] Handle mouse input with GetMousePosition
- [ ] Create simple movement and animation
- [ ] Use custom colors

---

## Next Steps

1. Study the [examples](examples/) in this lesson
2. Work through the [exercises](../exercises/) in order
3. Complete the [Simple Game mini-project](../mini-project/)
