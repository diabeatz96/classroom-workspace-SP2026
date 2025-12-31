// Example 6: Game States
// Demonstrates: Managing menu, playing, and game over screens

#include "raylib.h"

// Define game states
enum GameState {
    MENU,
    PLAYING,
    GAME_OVER
};

int main() {
    InitWindow(800, 600, "Game States Demo");
    SetTargetFPS(60);

    // Current game state
    GameState state = MENU;

    // Game variables
    int score = 0;
    int playerX = 375;
    int playerY = 500;
    int targetX = 400;
    int targetY = 100;
    int targetSize = 40;
    int lives = 3;

    while (!WindowShouldClose()) {
        // UPDATE PHASE - depends on current state
        switch (state) {
            case MENU:
                if (IsKeyPressed(KEY_ENTER)) {
                    // Start game - reset everything
                    score = 0;
                    lives = 3;
                    playerX = 375;
                    targetX = GetRandomValue(50, 750);
                    state = PLAYING;
                }
                break;

            case PLAYING:
                // Player movement
                if (IsKeyDown(KEY_LEFT) && playerX > 0) playerX -= 6;
                if (IsKeyDown(KEY_RIGHT) && playerX < 750) playerX += 6;

                // Check if player catches target
                if (playerX < targetX + targetSize &&
                    playerX + 50 > targetX &&
                    playerY < targetY + targetSize &&
                    playerY + 20 > targetY) {
                    score += 10;
                    targetX = GetRandomValue(50, 750);
                    targetY = GetRandomValue(50, 300);
                }

                // Target falls down
                targetY += 3;

                // Target missed
                if (targetY > 600) {
                    lives--;
                    targetX = GetRandomValue(50, 750);
                    targetY = 50;
                    if (lives <= 0) {
                        state = GAME_OVER;
                    }
                }
                break;

            case GAME_OVER:
                if (IsKeyPressed(KEY_R)) {
                    state = MENU;
                }
                break;
        }

        // DRAW PHASE - depends on current state
        BeginDrawing();
        ClearBackground(RAYWHITE);

        switch (state) {
            case MENU:
                DrawText("CATCH THE TARGET", 200, 200, 50, DARKBLUE);
                DrawText("Press ENTER to Start", 280, 350, 25, DARKGRAY);
                DrawText("Use LEFT/RIGHT arrows to move", 240, 400, 20, GRAY);
                break;

            case PLAYING:
                // Draw player (paddle at bottom)
                DrawRectangle(playerX, playerY, 50, 20, BLUE);

                // Draw falling target
                DrawRectangle(targetX, targetY, targetSize, targetSize, RED);

                // Draw HUD
                DrawText(TextFormat("Score: %d", score), 10, 10, 25, DARKGRAY);
                DrawText(TextFormat("Lives: %d", lives), 700, 10, 25, DARKGRAY);
                break;

            case GAME_OVER:
                DrawText("GAME OVER", 280, 200, 60, RED);
                DrawText(TextFormat("Final Score: %d", score), 300, 300, 30, DARKGRAY);
                DrawText("Press R to Return to Menu", 260, 400, 25, GRAY);
                break;
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Key Concepts:
- enum creates named states for clarity
- switch/case handles different states
- Each state has its own update AND draw logic
- Reset game variables when starting new game
- GetRandomValue() generates random numbers in range
- HUD (Heads-Up Display) shows score and lives
*/
