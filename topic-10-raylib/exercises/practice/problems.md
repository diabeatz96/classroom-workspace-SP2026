# Practice Problems: Raylib

Complete each problem in a separate `.cpp` file in the `solutions/` folder.

---

## Problem 1: Shape Gallery
**Difficulty:** Easy

Create a program that displays a gallery of different shapes:
- A red rectangle in the top-left
- A green circle in the top-right
- A blue triangle in the bottom-left
- A yellow line from bottom-right to center

**Requirements:**
- Window size: 800x600
- Add text labels for each shape
- Use different colors for each shape

---

## Problem 2: Mouse Follower
**Difficulty:** Easy

Create a program where a circle follows the mouse cursor.

**Requirements:**
- Draw a circle at the current mouse position
- Circle should have a radius of 25 pixels
- Display the current mouse coordinates on screen
- Change circle color to red when left mouse button is held

---

## Problem 3: Traffic Light
**Difficulty:** Medium

Create a traffic light simulation:
- Draw three circles vertically (red, yellow, green)
- Only one light should be "on" (bright) at a time
- Others should be dimmed (darker version)
- Press 1, 2, or 3 to switch which light is on

**Requirements:**
- Draw a black rectangle as the traffic light housing
- Red light at top, yellow in middle, green at bottom
- Default state: red light on

---

## Problem 4: Paddle Controller
**Difficulty:** Medium

Create a paddle that moves left and right at the bottom of the screen.

**Requirements:**
- Paddle size: 100x20 pixels
- Paddle stays at bottom of screen (y = 550)
- Move with LEFT/RIGHT arrow keys
- Paddle cannot go off screen
- Display paddle position on screen

---

## Problem 5: Bouncing Ball
**Difficulty:** Medium

Create a ball that bounces around the screen.

**Requirements:**
- Ball bounces off all four walls
- Ball changes color each time it bounces
- Display bounce count on screen
- Ball should have a radius of 20 pixels
- Start the ball in the center

---

## Problem 6: Click Counter Game
**Difficulty:** Medium

Create a game where circles appear randomly and the player must click them.

**Requirements:**
- A circle appears at a random position
- When clicked, score increases and circle moves to new random position
- Display current score
- If player misses (clicks outside circle), display "Miss!"
- Circle radius: 40 pixels

---

## Problem 7: Drawing Program (Challenge)
**Difficulty:** Hard

Create a simple drawing program.

**Requirements:**
- Hold left mouse button to draw
- Press C to clear the screen
- Press 1-4 to change colors (Red, Green, Blue, Yellow)
- Display current color and instructions
- Draw small circles along the mouse path

**Hint:** Store drawn points in arrays.

---

## Problem 8: Simple Pong (Challenge)
**Difficulty:** Hard

Create a simple single-player Pong game.

**Requirements:**
- Player paddle at bottom, controlled by LEFT/RIGHT
- Ball bounces off walls and paddle
- Score increases when ball hits paddle
- Game over when ball goes past paddle
- Display score and game over screen
- Press R to restart

---

## Submission Checklist
- [ ] Each solution compiles without errors
- [ ] All programs include the proper game loop structure
- [ ] Programs respond to correct input (keyboard/mouse)
- [ ] Drawing happens between BeginDrawing/EndDrawing
- [ ] CloseWindow is called at the end
