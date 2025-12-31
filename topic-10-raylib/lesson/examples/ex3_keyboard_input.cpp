// Example 3: Keyboard Input
// Demonstrates: Moving a rectangle with arrow keys

#include "raylib.h"

int main() {
    InitWindow(800, 600, "Keyboard Input - Move the Square");
    SetTargetFPS(60);

    // Player position (center of screen)
    int playerX = 375;
    int playerY = 275;

    // Player size
    int playerSize = 50;

    // Movement speed (pixels per frame)
    int speed = 5;

    while (!WindowShouldClose()) {
        // UPDATE PHASE - Handle input and update game state

        // IsKeyDown returns true while key is held
        if (IsKeyDown(KEY_RIGHT)) {
            playerX += speed;
        }
        if (IsKeyDown(KEY_LEFT)) {
            playerX -= speed;
        }
        if (IsKeyDown(KEY_DOWN)) {
            playerY += speed;
        }
        if (IsKeyDown(KEY_UP)) {
            playerY -= speed;
        }

        // Keep player on screen (boundary checking)
        if (playerX < 0) playerX = 0;
        if (playerX > 800 - playerSize) playerX = 800 - playerSize;
        if (playerY < 0) playerY = 0;
        if (playerY > 600 - playerSize) playerY = 600 - playerSize;

        // DRAW PHASE
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw the player
        DrawRectangle(playerX, playerY, playerSize, playerSize, BLUE);

        // Draw instructions
        DrawText("Use ARROW KEYS to move", 10, 10, 20, DARKGRAY);
        DrawText(TextFormat("Position: (%d, %d)", playerX, playerY), 10, 40, 20, GRAY);

        // Draw screen boundary indicator
        DrawRectangleLines(0, 0, 800, 600, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Key Concepts:
- IsKeyDown() returns true continuously while key is pressed
- Update game state BEFORE drawing
- Use boundary checking to keep objects on screen
- TextFormat() works like printf for displaying variables
- Separate update and draw phases is good practice
*/
