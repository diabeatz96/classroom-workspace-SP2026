// Example 2: Drawing Shapes
// Demonstrates: Drawing rectangles, circles, lines, and triangles

#include "raylib.h"

int main() {
    InitWindow(800, 600, "Drawing Shapes");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Title
        DrawText("Raylib Shape Drawing", 280, 20, 30, DARKGRAY);

        // Filled rectangle
        // DrawRectangle(x, y, width, height, color)
        DrawRectangle(50, 100, 150, 100, RED);
        DrawText("Rectangle", 75, 210, 16, DARKGRAY);

        // Rectangle outline only
        DrawRectangleLines(50, 280, 150, 100, MAROON);
        DrawText("Rectangle Lines", 55, 390, 16, DARKGRAY);

        // Filled circle
        // DrawCircle(centerX, centerY, radius, color)
        DrawCircle(325, 150, 60, GREEN);
        DrawText("Circle", 295, 220, 16, DARKGRAY);

        // Circle outline only
        DrawCircleLines(325, 330, 60, DARKGREEN);
        DrawText("Circle Lines", 280, 400, 16, DARKGRAY);

        // Line
        // DrawLine(startX, startY, endX, endY, color)
        DrawLine(450, 100, 600, 200, BLUE);
        DrawText("Line", 510, 210, 16, DARKGRAY);

        // Thick line using DrawLineEx
        // Uses Vector2 for points and specifies thickness
        DrawLineEx((Vector2){450, 280}, (Vector2){600, 380}, 5.0f, DARKBLUE);
        DrawText("Thick Line", 490, 390, 16, DARKGRAY);

        // Triangle (points must be counter-clockwise!)
        // DrawTriangle(v1, v2, v3, color)
        DrawTriangle(
            (Vector2){725, 100},   // Top
            (Vector2){650, 200},   // Bottom-left
            (Vector2){800, 200},   // Bottom-right
            PURPLE
        );
        DrawText("Triangle", 690, 210, 16, DARKGRAY);

        // Coordinate reference
        DrawText("Remember: (0,0) is top-left!", 10, 560, 20, GRAY);
        DrawCircle(10, 560, 5, RED);  // Mark position

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Key Concepts:
- Coordinates start at (0,0) in top-left
- X increases to the right, Y increases downward
- Filled shapes: DrawRectangle, DrawCircle, DrawTriangle
- Outline shapes: DrawRectangleLines, DrawCircleLines
- DrawLineEx allows thickness specification
- Triangle points must be counter-clockwise for proper filling
*/
