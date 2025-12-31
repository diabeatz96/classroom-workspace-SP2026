# Project: ASCII Art Generator

## Overview

You will create a program that displays a piece of ASCII art. ASCII art uses text characters to create pictures, and it was a popular way to create graphics before modern image formats existed. This project lets you practice output statements, escape sequences, and program structure while creating something visually interesting.

## Learning Goals

By completing this project, you will demonstrate your ability to:
- Write a complete C++ program with proper structure
- Use multiple `cout` statements to create complex output
- Apply escape sequences for formatting
- Create visually aligned text output

## Requirements

Your program must:

1. Display an ASCII art image of your choice (robot, animal, house, car, spaceship, etc.)
2. Include at least 10 lines of output
3. Use at least one escape sequence (such as `\\` for backslash or `\"` for quotes)
4. Include a header comment with your name and a description of your art
5. Have a title displayed above the art (e.g., "My Robot" or "A Cat")
6. Compile and run without errors

## Example Output

Here is an example of ASCII art for a robot:

```
=========================
      MY ROBOT FRIEND
=========================

      +---------+
      | [O] [O] |
      |    V    |
      |  \___/  |
      +---------+
          |||
     +----|||----+
     |    |||    |
     | [] ||| [] |
     +----|||----+
          |||
         // \\
        //   \\
       ()     ()
```

Your art does NOT need to be a robot - choose something you find interesting!

## Getting Started

1. **Choose your subject.** What do you want to draw? Some ideas:
   - Animals (cat, dog, fish, bird)
   - Objects (house, car, rocket, computer)
   - Characters (robot, alien, stick figure)
   - Patterns (checkerboard, diamond, pyramid)

2. **Sketch it first.** Use paper or a text editor to plan your art before coding.

3. **Start simple.** Get a basic version working, then add detail.

4. **Use the starter code.** Open `starter/main.cpp` and build from there.

5. **Test frequently.** Compile and run after adding each few lines.

## Tips for Creating ASCII Art

- Use characters like `| - + / \ _ = * # @ [ ]` to create shapes
- Spaces are important for alignment - count them carefully
- Use a monospace font to see accurate spacing
- Start from the top and work your way down
- Backslashes need to be escaped: use `\\` to display `\`
- If your art includes quotes, use `\"` to display `"`

## Hints

<details>
<summary>Hint 1: Planning Your Art</summary>

Before writing code, plan your art in a text file. Each line in your text file will become one `cout` statement.
</details>

<details>
<summary>Hint 2: Counting Characters</summary>

If your art looks crooked, count the characters on each line. Each line should align properly with the lines above and below it.
</details>

<details>
<summary>Hint 3: Escape Sequence Reminder</summary>

- To print a single backslash: `cout << "\\";`
- To print a double quote: `cout << "\"";`
- For a newline: `'\n'` or `"\n"`
</details>

<details>
<summary>Hint 4: Testing Alignment</summary>

If a line looks wrong, try adding or removing spaces at the beginning. Monospace fonts (like in your IDE) show one character per space.
</details>

## Extensions (Optional)

If you finish early, try one of these challenges:

1. **Add a frame.** Put a border around your entire art piece.

2. **Create a scene.** Add a ground line, sky, or background elements.

3. **Make multiple pieces.** Create 2-3 small ASCII art images and display them together.

4. **Add animation effect.** Create multiple frames of art and display them in sequence (the program will show them one after another, creating a simple animation effect).

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Program compiles without errors | 20 |
| At least 10 lines of ASCII art output | 20 |
| Art is recognizable and well-formed | 20 |
| Uses at least one escape sequence correctly | 15 |
| Includes title above the art | 10 |
| Proper program structure and header comment | 15 |
| **Total** | **100** |

## Submission

Submit your completed `main.cpp` file according to your instructor's guidelines.
