// Worked Example 2: Color Changing Circle
// Problem: Create a circle that changes color when clicked.

#include "raylib.h"

int main() {
    // Step 1: Initialize the window
    InitWindow(800, 600, "Color Changing Circle");
    SetTargetFPS(60);

    // Step 2: Define circle properties
    int circleX = 400;
    int circleY = 300;
    int circleRadius = 80;

    // Step 3: Define color options
    Color colors[] = {RED, GREEN, BLUE, YELLOW, PURPLE, ORANGE, PINK};
    int numColors = 7;
    int currentColor = 0;

    // Step 4: Track click count
    int clickCount = 0;

    // Main game loop
    while (!WindowShouldClose()) {
        // Step 5: Check for mouse click on circle
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            // Get mouse position
            int mouseX = GetMouseX();
            int mouseY = GetMouseY();

            // Step 6: Calculate distance from mouse to circle center
            // Using distance formula: sqrt((x2-x1)^2 + (y2-y1)^2)
            int dx = mouseX - circleX;
            int dy = mouseY - circleY;
            float distance = sqrt(dx * dx + dy * dy);

            // Step 7: If click is inside circle, change color
            if (distance <= circleRadius) {
                currentColor = (currentColor + 1) % numColors;
                clickCount++;
            }
        }

        // Step 8: Draw everything
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw the circle
        DrawCircle(circleX, circleY, circleRadius, colors[currentColor]);

        // Draw circle outline for visibility
        DrawCircleLines(circleX, circleY, circleRadius, BLACK);

        // Draw instructions and stats
        DrawText("Click the circle to change its color!", 230, 50, 24, DARKGRAY);
        DrawText(TextFormat("Clicks on circle: %d", clickCount), 10, 560, 20, GRAY);

        // Show current mouse position
        DrawText(TextFormat("Mouse: (%d, %d)", GetMouseX(), GetMouseY()), 600, 560, 18, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Trace Questions:

1. How do we detect if the mouse click is inside the circle?
   Answer: We calculate the distance from the mouse position to the
   circle's center. If distance <= radius, the click is inside.

2. What does (currentColor + 1) % numColors do?
   Answer: It cycles through colors 0, 1, 2, ..., 6, then back to 0.
   The modulo operator wraps around when we reach the end.

3. Why do we need sqrt() for the distance calculation?
   Answer: The Pythagorean theorem: distance = sqrt(dx^2 + dy^2).
   This gives us the straight-line distance between two points.

4. What happens if we click outside the circle?
   Answer: Nothing changes because distance > circleRadius,
   so the color change code inside the if block doesn't execute.
*/
