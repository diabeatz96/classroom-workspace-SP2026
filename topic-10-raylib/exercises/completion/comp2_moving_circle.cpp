// Completion Problem 2: Moving Circle
// Fill in the blanks to create a circle that moves with arrow keys.

#include "raylib.h"

int main() {
    InitWindow(800, 600, "Moving Circle");
    SetTargetFPS(60);

    // Circle properties
    float circleX = 400;
    float circleY = 300;
    float radius = 30;
    float speed = 5;

    while (!WindowShouldClose()) {
        // UPDATE PHASE

        // TODO: Move right when RIGHT arrow is pressed
        if (_______(KEY_RIGHT)) {
            circleX += _______;
        }

        // TODO: Move left when LEFT arrow is pressed
        if (_______(KEY_LEFT)) {
            circleX -= speed;
        }

        // TODO: Move down when DOWN arrow is pressed
        if (IsKeyDown(_______)) {
            circleY += speed;
        }

        // TODO: Move up when UP arrow is pressed
        if (IsKeyDown(_______)) {
            circleY -= speed;
        }

        // DRAW PHASE
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // TODO: Draw the circle at (circleX, circleY) with the given radius
        // Use the color BLUE
        _______(circleX, circleY, radius, _______);

        DrawText("Use Arrow Keys to Move", 280, 20, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Expected behavior:
- A blue circle appears in the center
- Arrow keys move the circle in corresponding directions
*/
