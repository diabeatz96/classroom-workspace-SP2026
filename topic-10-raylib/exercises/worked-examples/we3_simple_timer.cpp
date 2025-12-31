// Worked Example 3: Simple Timer
// Problem: Create a countdown timer that displays remaining time.

#include "raylib.h"

int main() {
    // Step 1: Initialize the window
    InitWindow(800, 600, "Countdown Timer");
    SetTargetFPS(60);

    // Step 2: Timer settings
    float totalTime = 10.0f;     // 10 second countdown
    float timeRemaining = totalTime;
    bool timerRunning = false;
    bool timerFinished = false;

    // Main game loop
    while (!WindowShouldClose()) {
        // Step 3: Handle timer controls
        if (IsKeyPressed(KEY_SPACE)) {
            if (timerFinished) {
                // Reset the timer
                timeRemaining = totalTime;
                timerFinished = false;
                timerRunning = true;
            } else {
                // Toggle running/paused
                timerRunning = !timerRunning;
            }
        }

        // Reset with R key
        if (IsKeyPressed(KEY_R)) {
            timeRemaining = totalTime;
            timerRunning = false;
            timerFinished = false;
        }

        // Step 4: Update timer if running
        if (timerRunning && !timerFinished) {
            // GetFrameTime() returns time since last frame in seconds
            timeRemaining -= GetFrameTime();

            // Check if timer reached zero
            if (timeRemaining <= 0) {
                timeRemaining = 0;
                timerRunning = false;
                timerFinished = true;
            }
        }

        // Step 5: Draw everything
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw timer display
        if (timerFinished) {
            DrawText("TIME'S UP!", 280, 250, 60, RED);
        } else {
            // Format time as seconds with one decimal place
            DrawText(TextFormat("%.1f", timeRemaining), 340, 250, 80, DARKGRAY);
        }

        // Draw progress bar
        int barWidth = 400;
        int barHeight = 30;
        int barX = 200;
        int barY = 350;

        // Background bar (gray)
        DrawRectangle(barX, barY, barWidth, barHeight, LIGHTGRAY);

        // Progress bar (green to red as time decreases)
        float progress = timeRemaining / totalTime;
        Color barColor = (progress > 0.3f) ? GREEN : (progress > 0.1f) ? YELLOW : RED;
        DrawRectangle(barX, barY, barWidth * progress, barHeight, barColor);

        // Bar outline
        DrawRectangleLines(barX, barY, barWidth, barHeight, DARKGRAY);

        // Draw instructions
        DrawText("SPACE: Start/Pause", 300, 450, 20, GRAY);
        DrawText("R: Reset", 355, 480, 20, GRAY);

        // Draw status
        const char* status = timerFinished ? "Finished" : (timerRunning ? "Running" : "Paused");
        DrawText(TextFormat("Status: %s", status), 10, 10, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

/*
Trace Questions:

1. What does GetFrameTime() return?
   Answer: The time in seconds since the last frame was drawn.
   At 60 FPS, this is approximately 0.0167 seconds.

2. Why use float for timeRemaining instead of int?
   Answer: Floats allow sub-second precision. With int, we could only
   count whole seconds, making the timer less smooth.

3. How does the progress bar width calculation work?
   Answer: progress = timeRemaining / totalTime gives a value 0 to 1.
   Multiplying by barWidth gives the filled portion's width.

4. What happens if you press SPACE when timer is finished?
   Answer: The timer resets to totalTime and starts running again,
   because we check timerFinished first in the if statement.
*/
