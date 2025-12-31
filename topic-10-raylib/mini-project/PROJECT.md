# Mini-Project: Catch the Falling Objects

## Overview

Create a game where the player controls a basket at the bottom of the screen and catches falling objects. Good objects increase your score, while bad objects decrease it or end the game.

## Game Description

Objects fall from the top of the screen at random horizontal positions. The player moves a basket left and right to catch them. The game gets progressively harder as more objects fall faster.

## Requirements

### Basic Requirements (Must Have)

1. **Player Basket**
   - A rectangle at the bottom of the screen
   - Moves left/right with arrow keys
   - Cannot move off screen

2. **Falling Objects**
   - At least 5 objects falling at once
   - Random starting X positions
   - Fall at a constant speed
   - Respawn at top when they reach bottom or are caught

3. **Collision Detection**
   - Detect when objects touch the basket
   - Good objects (green) increase score by 10
   - Objects that hit the ground decrease a life

4. **Game States**
   - Menu screen with "Press ENTER to Start"
   - Playing state with active gameplay
   - Game Over screen with final score
   - Ability to restart

5. **HUD (Heads-Up Display)**
   - Current score
   - Lives remaining (start with 3)

### Stretch Goals (Optional Enhancements)

1. **Multiple Object Types**
   - Green objects: +10 points
   - Yellow objects: +25 points (move faster)
   - Red objects: -10 points or lose a life

2. **Increasing Difficulty**
   - Objects fall faster as score increases
   - More objects spawn at higher scores

3. **Power-ups**
   - Wider basket temporarily
   - Slow motion
   - Extra life

4. **Visual Polish**
   - Particle effects when catching objects
   - Background graphics
   - Animations

## Implementation Guide

### Step 1: Set Up the Window
```cpp
InitWindow(800, 600, "Catch Game");
SetTargetFPS(60);
```

### Step 2: Define Data Structures
```cpp
// Basket
int basketX = 350;
int basketY = 550;
int basketWidth = 100;
int basketHeight = 20;

// Falling objects (arrays for multiple objects)
const int MAX_OBJECTS = 5;
float objectX[MAX_OBJECTS];
float objectY[MAX_OBJECTS];
float objectSpeed[MAX_OBJECTS];
bool objectActive[MAX_OBJECTS];
```

### Step 3: Initialize Objects
```cpp
for (int i = 0; i < MAX_OBJECTS; i++) {
    objectX[i] = GetRandomValue(20, 780);
    objectY[i] = GetRandomValue(-300, 0);  // Start above screen
    objectSpeed[i] = 3;
    objectActive[i] = true;
}
```

### Step 4: Game Loop Structure
```cpp
while (!WindowShouldClose()) {
    switch (gameState) {
        case MENU:
            // Draw menu, wait for ENTER
            break;
        case PLAYING:
            // Update basket, objects, check collisions
            // Draw everything
            break;
        case GAME_OVER:
            // Show final score, wait for R to restart
            break;
    }
}
```

### Step 5: Collision Detection
```cpp
// Check if object overlaps with basket
if (objectY[i] + objectSize >= basketY &&
    objectX[i] >= basketX &&
    objectX[i] <= basketX + basketWidth) {
    // Object caught!
    score += 10;
    // Reset object position
}
```

## Grading Rubric

| Criteria | Points |
|----------|--------|
| Window and game loop work correctly | 10 |
| Basket moves with keyboard and stays on screen | 15 |
| Multiple objects fall from top | 15 |
| Objects respawn when caught or hit bottom | 15 |
| Collision detection works | 15 |
| Score tracking works | 10 |
| Lives system works | 10 |
| Game states (menu, playing, game over) | 10 |
| **Total** | **100** |

## Bonus Points

| Bonus Feature | Points |
|---------------|--------|
| Multiple object types with different effects | +10 |
| Increasing difficulty over time | +10 |
| Sound effects | +5 |
| Visual polish (colors, animations) | +5 |

## Tips

1. Start with the basic game loop and basket movement
2. Add a single falling object first, then expand to arrays
3. Test collision detection with debug output before adding scoring
4. Add game states last, after core gameplay works
5. Use constants for things like speeds and sizes to make tuning easier

## Sample Output

```
=== CATCH GAME ===

[MENU SCREEN]
CATCH THE FALLING OBJECTS
Press ENTER to Start

[PLAYING SCREEN]
Score: 150    Lives: 3
[Objects falling, basket at bottom]

[GAME OVER SCREEN]
GAME OVER
Final Score: 280
Press R to Restart
```

Good luck and have fun!
