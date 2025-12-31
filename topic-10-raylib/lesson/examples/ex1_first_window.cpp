// Example 1: First Window
// Demonstrates: Creating a window and the basic game loop

#include "raylib.h"

int main() {
    // Initialize the window
    // Parameters: width, height, window title
    InitWindow(800, 600, "My First Raylib Window");

    // Set target frames per second
    // 60 FPS is standard for smooth graphics
    SetTargetFPS(60);

    // Main game loop
    // WindowShouldClose() returns true when:
    // - User clicks the X button
    // - User presses ESC key
    while (!WindowShouldClose()) {
        // Begin drawing phase
        BeginDrawing();

        // Clear the screen with a color
        // RAYWHITE is a slightly off-white color
        ClearBackground(RAYWHITE);

        // Draw some text in the center
        DrawText("Hello, Raylib!", 300, 280, 30, DARKGRAY);

        // Show instructions
        DrawText("Press ESC to exit", 320, 320, 20, GRAY);

        // End drawing phase - this displays everything
        EndDrawing();
    }

    // Cleanup - always close the window when done
    CloseWindow();

    return 0;
}

/*
What this program does:
1. Creates an 800x600 pixel window
2. Displays "Hello, Raylib!" in the center
3. Runs at 60 frames per second
4. Closes when user presses ESC or clicks X

Key Concepts:
- InitWindow() must be called first
- The while loop runs continuously until window closes
- BeginDrawing/EndDrawing wrap all drawing code
- ClearBackground prevents old frames from showing
- CloseWindow() cleans up resources
*/
