// Example 5: Bouncing Ball Animation
// Demonstrates: Simple animation with velocity and collision

#include "raylib.h"

int main() {
    InitWindow(800, 600, "Bouncing Ball");
    SetTargetFPS(60);

    // Ball properties
    float ballX = 400;
    float ballY = 300;
    float ballRadius = 30;

    // Ball velocity (pixels per frame)
    float speedX = 5;
    float speedY = 4;

    // Ball color
    Color ballColor = RED;

    while (!WindowShouldClose()) {
        // UPDATE PHASE

        // Move the ball
        ballX += speedX;
        ballY += speedY;

        // Bounce off left and right walls
        if (ballX - ballRadius <= 0) {
            ballX = ballRadius;  // Prevent going past wall
            speedX *= -1;        // Reverse horizontal direction
            ballColor = GREEN;   // Change color on bounce
        }
        if (ballX + ballRadius >= 800) {
            ballX = 800 - ballRadius;
            speedX *= -1;
            ballColor = BLUE;
        }

        // Bounce off top and bottom walls
        if (ballY - ballRadius <= 0) {
            ballY = ballRadius;
            speedY *= -1;
            ballColor = YELLOW;
        }
        if (ballY + ballRadius >= 600) {
            ballY = 600 - ballRadius;
            speedY *= -1;
            ballColor = PURPLE;
        }

        // DRAW PHASE
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw the ball
        DrawCircle(ballX, ballY, ballRadius, ballColor);

        // Draw wall indicators
        DrawRectangleLines(0, 0, 800, 600, LIGHTGRAY);

        // Draw info
        DrawText("Bouncing Ball Animation", 280, 10, 25, DARKGRAY);
        DrawText(TextFormat("Position: (%.1f, %.1f)", ballX, ballY), 10, 560, 18, GRAY);
        DrawText(TextFormat("Velocity: (%.1f, %.1f)", speedX, speedY), 10, 580, 18, GRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Key Concepts:
- Animation = changing position each frame
- Velocity is added to position each frame
- Collision detection compares position to boundaries
- Multiply velocity by -1 to reverse direction
- Use radius for circular collision checking
- Float type allows smoother movement
*/
