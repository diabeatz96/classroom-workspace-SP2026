// Worked Example 1: Moving Player with Boundaries
// Problem: Create a player that moves with WASD keys and stays on screen.

#include "raylib.h"

int main() {
    // Step 1: Initialize the window
    InitWindow(800, 600, "Moving Player");
    SetTargetFPS(60);

    // Step 2: Define player properties
    float playerX = 400;    // Start in center
    float playerY = 300;
    int playerWidth = 40;
    int playerHeight = 40;
    float speed = 4.0f;

    // Step 3: Define screen boundaries
    int screenWidth = 800;
    int screenHeight = 600;

    // Main game loop
    while (!WindowShouldClose()) {
        // Step 4: Handle input - WASD movement
        // Check each key and update position
        if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
            playerY -= speed;
        }
        if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN)) {
            playerY += speed;
        }
        if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
            playerX -= speed;
        }
        if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
            playerX += speed;
        }

        // Step 5: Keep player within screen boundaries
        // Check left boundary
        if (playerX < 0) {
            playerX = 0;
        }
        // Check right boundary (account for player width)
        if (playerX > screenWidth - playerWidth) {
            playerX = screenWidth - playerWidth;
        }
        // Check top boundary
        if (playerY < 0) {
            playerY = 0;
        }
        // Check bottom boundary (account for player height)
        if (playerY > screenHeight - playerHeight) {
            playerY = screenHeight - playerHeight;
        }

        // Step 6: Draw everything
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw the player
        DrawRectangle(playerX, playerY, playerWidth, playerHeight, BLUE);

        // Draw instructions
        DrawText("Use WASD or Arrow Keys to move", 10, 10, 20, DARKGRAY);
        DrawText(TextFormat("Position: (%.0f, %.0f)", playerX, playerY), 10, 40, 18, GRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Trace Questions:

1. Why do we subtract playerWidth when checking the right boundary?
   Answer: The player's position is its top-left corner. If we just check
   playerX > screenWidth, the player would go off screen by its width.

2. What happens if we use IsKeyPressed instead of IsKeyDown?
   Answer: The player would only move one pixel per key press instead
   of moving continuously while the key is held.

3. If the player is at position (790, 300) with width 40, what happens?
   Answer: The boundary check sets playerX to 760 (800 - 40) to keep
   the player fully visible.

4. Why use float for position instead of int?
   Answer: Floats allow smoother movement and easier speed adjustments.
   We can use fractional speeds like 4.5 pixels per frame.
*/
