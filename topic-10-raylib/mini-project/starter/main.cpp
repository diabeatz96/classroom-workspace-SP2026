// Mini-Project: Catch the Falling Objects
// Starter Code

#include "raylib.h"

// Game states
enum GameState {
    MENU,
    PLAYING,
    GAME_OVER
};

int main() {
    // Initialize window
    InitWindow(800, 600, "Catch the Falling Objects");
    SetTargetFPS(60);

    // Game state
    GameState state = MENU;

    // Basket properties
    int basketX = 350;
    int basketY = 550;
    int basketWidth = 100;
    int basketHeight = 20;
    int basketSpeed = 8;

    // Falling objects
    const int MAX_OBJECTS = 5;
    float objectX[MAX_OBJECTS];
    float objectY[MAX_OBJECTS];
    float objectSpeed[MAX_OBJECTS];
    int objectSize = 20;

    // Game variables
    int score = 0;
    int lives = 3;

    // TODO: Initialize falling objects with random positions
    // Use a for loop to set initial values for each object
    // objectX[i] = random position (use GetRandomValue)
    // objectY[i] = start above the screen (negative value)
    // objectSpeed[i] = falling speed

    // Main game loop
    while (!WindowShouldClose()) {
        // Handle different game states
        switch (state) {
            case MENU:
                // TODO: Check for ENTER key to start game
                // Reset score and lives when starting
                break;

            case PLAYING:
                // TODO: Handle basket movement (LEFT/RIGHT keys)
                // Keep basket within screen bounds

                // TODO: Update falling objects
                // - Move each object down by its speed
                // - Check if object is caught by basket (collision)
                // - Check if object hit the ground (lose a life)
                // - Reset object position when caught or missed

                // TODO: Check for game over (lives <= 0)
                break;

            case GAME_OVER:
                // TODO: Check for R key to restart
                // Reset all game variables
                break;
        }

        // Drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (state) {
            case MENU:
                // TODO: Draw menu screen
                // - Game title
                // - "Press ENTER to Start"
                break;

            case PLAYING:
                // TODO: Draw basket
                // DrawRectangle(basketX, basketY, basketWidth, basketHeight, BLUE);

                // TODO: Draw all falling objects
                // Use a for loop to draw each object

                // TODO: Draw HUD (score and lives)
                break;

            case GAME_OVER:
                // TODO: Draw game over screen
                // - "GAME OVER" text
                // - Final score
                // - "Press R to Restart"
                break;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Implementation Hints:

1. Collision Detection:
   Check if the object's bottom edge is at or below the basket's top,
   AND the object's X is within the basket's width.

   if (objectY[i] + objectSize >= basketY &&
       objectX[i] >= basketX &&
       objectX[i] <= basketX + basketWidth) {
       // Caught!
   }

2. Resetting Objects:
   When an object is caught or hits the ground, reset its position:
   objectX[i] = GetRandomValue(20, 780);
   objectY[i] = GetRandomValue(-200, -20);

3. Game Over Check:
   if (lives <= 0) {
       state = GAME_OVER;
   }

4. Restart Logic:
   Reset score = 0, lives = 3, and all object positions
*/
