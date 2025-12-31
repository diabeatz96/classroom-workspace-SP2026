# Debugging Guide

Debugging is the process of finding and fixing errors in your code. This guide teaches you systematic approaches to track down bugs.

## Types of Errors

### Compilation Errors
- Caught by the compiler before the program runs
- Usually syntax errors (missing semicolons, typos, etc.)
- The compiler tells you the line number and type of error
- **Must be fixed before the program can run**

### Runtime Errors
- Occur while the program is running
- Examples: division by zero, array out of bounds
- The program crashes or produces an error message

### Logic Errors
- The program runs but produces incorrect results
- The hardest to find because there is no error message
- Requires careful analysis of program behavior

## Debugging Strategies

### 1. Read the Error Message

Compiler errors include valuable information:
```
example.cpp:15:5: error: expected ';' before 'cout'
```

This tells you:
- **File:** example.cpp
- **Line:** 15
- **Column:** 5
- **Problem:** Missing semicolon

Always check the line mentioned AND the line before it.

### 2. Use Print Statements (cout Debugging)

Add `cout` statements to see what your program is doing:

```cpp
int calculate(int x, int y) {
    cout << "DEBUG: x = " << x << ", y = " << y << '\n';

    int result = x + y;
    cout << "DEBUG: result = " << result << '\n';

    return result;
}
```

This helps you:
- Verify that values are what you expect
- See which parts of code are executing
- Track variable changes over time

### 3. Trace Through Your Code

Go through your code line by line, keeping track of variable values on paper:

```cpp
int sum = 0;          // sum = 0
for (int i = 1; i <= 3; i++) {
    sum = sum + i;
    // i=1: sum = 0+1 = 1
    // i=2: sum = 1+2 = 3
    // i=3: sum = 3+3 = 6
}
cout << sum;          // Output: 6
```

### 4. Simplify the Problem

If your code is complex:
1. Create a smaller test case
2. Comment out sections of code
3. Test each part independently
4. Add parts back one at a time until you find the bug

### 5. Check Common Mistakes

When stuck, verify these common issues:
- [ ] All variables initialized before use?
- [ ] Using `==` for comparison (not `=`)?
- [ ] Array indices within bounds?
- [ ] Loop conditions correct?
- [ ] All braces matched?
- [ ] Correct data types?
- [ ] Functions returning values?

### 6. Rubber Duck Debugging

Explain your code out loud, line by line. Pretend you are teaching someone else. Often, you will discover the bug while explaining what the code "should" do.

## Using a Debugger

Most IDEs have built-in debuggers. Here is how to use them:

### Setting Breakpoints
- Click next to a line number to set a breakpoint
- The program will pause when it reaches that line
- You can then inspect variable values

### Stepping Through Code
- **Step Over:** Execute the current line, move to the next
- **Step Into:** If the line calls a function, go inside that function
- **Step Out:** Finish the current function, return to the caller
- **Continue:** Run until the next breakpoint

### Watching Variables
- Add variables to a "watch" list
- See their values change as you step through code
- Some debuggers show all local variables automatically

## Debugging Checklist

When your program does not work, go through this list:

1. **Does it compile?**
   - If not, read and fix error messages

2. **Does it run without crashing?**
   - If not, look for runtime errors (division by zero, bad input, etc.)

3. **Is the output correct?**
   - If not, you have a logic error

4. **What part is wrong?**
   - Add cout statements to narrow down the location

5. **What did you expect vs what happened?**
   - Compare expected output to actual output

6. **What changed recently?**
   - If code worked before, focus on recent changes

## Example Debugging Session

**Problem:** This code should print 1 to 5, but prints nothing.

```cpp
int i = 1;
while (i > 5) {
    cout << i << " ";
    i++;
}
```

**Step 1:** Add a cout before the loop
```cpp
cout << "Starting loop with i = " << i << '\n';
```
Output: `Starting loop with i = 1`

**Step 2:** Check the condition
- When i = 1, is `i > 5` true? No! 1 is not greater than 5.
- The loop never executes!

**Fix:**
```cpp
while (i <= 5) {  // Changed > to <=
```

## Prevention Tips

1. **Write a little, test a little** - Do not write 100 lines then test
2. **Use meaningful variable names** - `score` not `s`
3. **Keep functions small** - Easier to test and debug
4. **Add comments** - Explain what code should do
5. **Initialize all variables** - Prevent garbage values
6. **Use consistent indentation** - Makes structure visible
