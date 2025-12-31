// Completion Problem 1: Basic Window
// Fill in the blanks to create a Raylib window that displays a message.

#include "raylib.h"

int main() {
    // TODO: Initialize a window that is 800 pixels wide and 600 pixels tall
    // with the title "My First Game"
    _______(800, 600, "My First Game");

    // TODO: Set the target frame rate to 60 FPS
    _______(60);

    // Main game loop
    // TODO: Loop while the window should NOT close
    while (!_______()) {
        // TODO: Begin the drawing phase
        _______();

        // TODO: Clear the background with a white color
        _______(RAYWHITE);

        // Draw a welcome message
        DrawText("Welcome to Raylib!", 250, 280, 30, DARKGRAY);

        // TODO: End the drawing phase
        _______();
    }

    // TODO: Close the window and cleanup
    _______();

    return 0;
}

/*
Expected Output:
A window opens with "Welcome to Raylib!" displayed in the center.
Window closes when user presses ESC or clicks X.
*/
