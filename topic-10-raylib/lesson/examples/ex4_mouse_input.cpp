// Example 4: Mouse Input
// Demonstrates: Mouse position tracking and click handling

#include "raylib.h"

int main() {
    InitWindow(800, 600, "Mouse Input - Click to Draw");
    SetTargetFPS(60);

    // Store placed circles (up to 100)
    int circleX[100];
    int circleY[100];
    Color circleColors[100];
    int circleCount = 0;

    // Available colors to cycle through
    Color colors[] = {RED, GREEN, BLUE, YELLOW, PURPLE, ORANGE};
    int colorCount = 6;
    int currentColorIndex = 0;

    while (!WindowShouldClose()) {
        // UPDATE PHASE

        // Get mouse position
        int mouseX = GetMouseX();
        int mouseY = GetMouseY();

        // Left click to place a circle
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && circleCount < 100) {
            circleX[circleCount] = mouseX;
            circleY[circleCount] = mouseY;
            circleColors[circleCount] = colors[currentColorIndex];
            circleCount++;
        }

        // Right click to change color
        if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) {
            currentColorIndex = (currentColorIndex + 1) % colorCount;
        }

        // Press C to clear all circles
        if (IsKeyPressed(KEY_C)) {
            circleCount = 0;
        }

        // DRAW PHASE
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw all placed circles
        for (int i = 0; i < circleCount; i++) {
            DrawCircle(circleX[i], circleY[i], 25, circleColors[i]);
        }

        // Draw a preview circle at mouse position
        DrawCircleLines(mouseX, mouseY, 25, colors[currentColorIndex]);

        // Draw instructions
        DrawText("LEFT CLICK: Place circle", 10, 10, 18, DARKGRAY);
        DrawText("RIGHT CLICK: Change color", 10, 35, 18, DARKGRAY);
        DrawText("C: Clear all", 10, 60, 18, DARKGRAY);
        DrawText(TextFormat("Circles: %d/100", circleCount), 10, 85, 18, GRAY);

        // Show current color
        DrawText("Current color:", 10, 550, 18, DARKGRAY);
        DrawRectangle(130, 545, 30, 25, colors[currentColorIndex]);

        // Show mouse position
        DrawText(TextFormat("Mouse: (%d, %d)", mouseX, mouseY), 600, 10, 18, GRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Key Concepts:
- GetMouseX() and GetMouseY() return current mouse position
- IsMouseButtonPressed() returns true ONCE when clicked
- Arrays can store multiple objects (circles in this case)
- Preview (outline) shows where new object will be placed
- Modulo (%) operator cycles through color options
*/
