# Parsons Problems: Raylib

Arrange the code blocks in the correct order to create working programs.

---

## Problem 1: Basic Window Setup

Arrange these blocks to create a basic Raylib window.

```cpp
// Block A
while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    EndDrawing();
}

// Block B
#include "raylib.h"

int main() {

// Block C
CloseWindow();
return 0;
}

// Block D
InitWindow(800, 600, "My Window");
SetTargetFPS(60);
```

<details>
<summary>Solution</summary>

Correct order: B, D, A, C

```cpp
#include "raylib.h"

int main() {
    InitWindow(800, 600, "My Window");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
```
</details>

---

## Problem 2: Drawing a Shape

Arrange these blocks to draw a blue rectangle in the center of the screen.

```cpp
// Block A
BeginDrawing();
ClearBackground(RAYWHITE);

// Block B
EndDrawing();

// Block C
DrawRectangle(350, 250, 100, 100, BLUE);

// Block D
DrawText("Blue Square", 340, 360, 20, DARKGRAY);
```

<details>
<summary>Solution</summary>

Correct order: A, C, D, B

```cpp
BeginDrawing();
ClearBackground(RAYWHITE);
DrawRectangle(350, 250, 100, 100, BLUE);
DrawText("Blue Square", 340, 360, 20, DARKGRAY);
EndDrawing();
```

**Note:** All drawing must happen between BeginDrawing() and EndDrawing().
</details>

---

## Problem 3: Keyboard Movement

Arrange these blocks to move a player with arrow keys.

```cpp
// Block A
if (IsKeyDown(KEY_RIGHT)) playerX += 5;
if (IsKeyDown(KEY_LEFT)) playerX -= 5;

// Block B
int playerX = 400;
int playerY = 300;

// Block C
// In the game loop:
// Update phase

// Block D
// Draw phase
DrawRectangle(playerX, playerY, 50, 50, RED);
```

<details>
<summary>Solution</summary>

Correct order: B, C, A, D

```cpp
int playerX = 400;
int playerY = 300;

// In the game loop:
// Update phase
if (IsKeyDown(KEY_RIGHT)) playerX += 5;
if (IsKeyDown(KEY_LEFT)) playerX -= 5;

// Draw phase
DrawRectangle(playerX, playerY, 50, 50, RED);
```

**Note:** Variables declared before loop, update before draw.
</details>

---

## Problem 4: Mouse Click Detection

Arrange these blocks to detect mouse clicks.

```cpp
// Block A
if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    clickCount++;
}

// Block B
int mouseX = GetMouseX();
int mouseY = GetMouseY();

// Block C
DrawText(TextFormat("Clicks: %d", clickCount), 10, 10, 20, BLACK);
DrawText(TextFormat("Mouse: (%d, %d)", mouseX, mouseY), 10, 40, 20, GRAY);

// Block D
int clickCount = 0;
```

<details>
<summary>Solution</summary>

Correct order: D, B, A, C

```cpp
int clickCount = 0;

// In game loop:
int mouseX = GetMouseX();
int mouseY = GetMouseY();

if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
    clickCount++;
}

DrawText(TextFormat("Clicks: %d", clickCount), 10, 10, 20, BLACK);
DrawText(TextFormat("Mouse: (%d, %d)", mouseX, mouseY), 10, 40, 20, GRAY);
```
</details>

---

## Problem 5: Bouncing Ball

Arrange these blocks to make a ball bounce off the right wall.

```cpp
// Block A
if (ballX + radius >= 800) {
    speedX *= -1;
}

// Block B
float ballX = 100;
float speedX = 5;
float radius = 20;

// Block C
ballX += speedX;

// Block D
DrawCircle(ballX, 300, radius, RED);
```

<details>
<summary>Solution</summary>

Correct order: B, C, A, D

```cpp
float ballX = 100;
float speedX = 5;
float radius = 20;

// In game loop:
ballX += speedX;

if (ballX + radius >= 800) {
    speedX *= -1;
}

DrawCircle(ballX, 300, radius, RED);
```

**Note:** Update position, then check collision, then draw.
</details>

---

## Problem 6: Game State Menu

Arrange these blocks to create a menu that starts the game on ENTER.

```cpp
// Block A
case MENU:
    DrawText("Press ENTER to Start", 250, 300, 30, DARKGRAY);
    if (IsKeyPressed(KEY_ENTER)) {
        state = PLAYING;
    }
    break;

// Block B
enum GameState { MENU, PLAYING };
GameState state = MENU;

// Block C
switch (state) {

// Block D
case PLAYING:
    DrawText("Game is running!", 280, 300, 30, GREEN);
    break;
}
```

<details>
<summary>Solution</summary>

Correct order: B, C, A, D

```cpp
enum GameState { MENU, PLAYING };
GameState state = MENU;

// In game loop:
switch (state) {
    case MENU:
        DrawText("Press ENTER to Start", 250, 300, 30, DARKGRAY);
        if (IsKeyPressed(KEY_ENTER)) {
            state = PLAYING;
        }
        break;
    case PLAYING:
        DrawText("Game is running!", 280, 300, 30, GREEN);
        break;
}
```
</details>

---

## Problem 7: Drawing Multiple Shapes

Arrange these blocks to draw a simple face.

```cpp
// Block A
// Eyes
DrawCircle(350, 250, 15, BLACK);
DrawCircle(450, 250, 15, BLACK);

// Block B
// Face outline
DrawCircle(400, 300, 100, YELLOW);

// Block C
BeginDrawing();
ClearBackground(RAYWHITE);

// Block D
// Smile
DrawCircleLines(400, 320, 50, BLACK);
EndDrawing();
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
BeginDrawing();
ClearBackground(RAYWHITE);

// Face outline
DrawCircle(400, 300, 100, YELLOW);

// Eyes
DrawCircle(350, 250, 15, BLACK);
DrawCircle(450, 250, 15, BLACK);

// Smile
DrawCircleLines(400, 320, 50, BLACK);
EndDrawing();
```

**Note:** Draw from back to front - face first, then eyes on top.
</details>

---

## Problem 8: Complete Game Loop

Arrange these blocks to create a complete Raylib program structure.

```cpp
// Block A
// Update game logic
if (IsKeyDown(KEY_SPACE)) score++;

// Block B
InitWindow(800, 600, "Game");
SetTargetFPS(60);
int score = 0;

// Block C
BeginDrawing();
ClearBackground(RAYWHITE);
DrawText(TextFormat("Score: %d", score), 10, 10, 30, BLACK);
EndDrawing();

// Block D
#include "raylib.h"

int main() {

// Block E
while (!WindowShouldClose()) {

// Block F
}
CloseWindow();
return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: D, B, E, A, C, F

```cpp
#include "raylib.h"

int main() {
    InitWindow(800, 600, "Game");
    SetTargetFPS(60);
    int score = 0;

    while (!WindowShouldClose()) {
        // Update game logic
        if (IsKeyDown(KEY_SPACE)) score++;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText(TextFormat("Score: %d", score), 10, 10, 30, BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
```
</details>
