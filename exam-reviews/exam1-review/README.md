# Exam 1 Review

## Topics Covered

- Topic 01: Output and Program Structure
- Topic 02: Variables and Input
- Topic 03: Arithmetic and Expressions
- Topic 04: Selection Structures
- Topic 05: Repetition Structures

## Key Concepts to Review

### Topic 01: Output
- `cout` and the insertion operator `<<`
- Escape sequences: `\n`, `\t`, `\\`, `\"`
- Program structure: includes, main function, return statement
- Comments: single-line `//` and multi-line `/* */`

### Topic 02: Variables and Input
- Data types: `int`, `double`, `char`, `bool`, `string`
- Variable declaration and initialization
- `cin` and the extraction operator `>>`
- `getline()` for strings with spaces
- Variable naming conventions

### Topic 03: Arithmetic
- Operators: `+`, `-`, `*`, `/`, `%`
- Integer vs floating-point division
- Operator precedence
- Type casting: `static_cast<type>()`
- Compound assignment: `+=`, `-=`, `*=`, `/=`
- Increment/decrement: `++`, `--`

### Topic 04: Selection
- Relational operators: `<`, `>`, `<=`, `>=`, `==`, `!=`
- Logical operators: `&&`, `||`, `!`
- `if`, `if-else`, `else if` chains
- Nested if statements
- `switch` statements

### Topic 05: Loops
- `while` loops
- `for` loops
- `do-while` loops
- Nested loops
- `break` and `continue`
- Counters and accumulators

## Practice Questions

### Tracing Questions

1. What is the output of this code?
```cpp
int x = 5;
x = x + 3;
cout << x * 2;
```

2. What is the output?
```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    cout << '\n';
}
```

3. How many times does the loop execute?
```cpp
int count = 0;
int num = 100;
while (num > 0) {
    num = num / 2;
    count++;
}
```

### Writing Questions

1. Write a program that asks for a number and prints whether it is positive, negative, or zero.

2. Write a for loop that prints the numbers 10, 8, 6, 4, 2.

3. Write a program that calculates the sum of all even numbers from 1 to 100.

## Common Mistakes to Avoid

- Using `=` instead of `==` in conditions
- Forgetting semicolons
- Integer division when you want floating-point
- Infinite loops (forgetting to update loop variable)
- Off-by-one errors in loops
- Missing `break` in switch statements
