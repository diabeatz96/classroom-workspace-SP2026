# Exam 2 Review

## Topics Covered

- Topic 06: Functions
- Topic 07: Arrays
- Topic 08: Strings and 2D Arrays

## Key Concepts to Review

### Topic 06: Functions
- Function definition and calls
- Parameters vs arguments
- Return values
- Void functions
- Function prototypes
- Variable scope (local vs global)
- Pass by value vs pass by reference

### Topic 07: Arrays
- Array declaration: `int arr[10];`
- Array initialization: `int arr[] = {1, 2, 3};`
- Accessing elements: `arr[0]`, `arr[i]`
- Traversing with loops
- Parallel arrays
- Passing arrays to functions
- Common operations: sum, average, min, max, count

### Topic 08: Strings and 2D Arrays
- String operations: `length()`, `substr()`, `find()`
- Character access: `str[i]`, `str.at(i)`
- Character-by-character processing
- 2D array declaration: `int grid[3][4];`
- 2D array traversal with nested loops
- Row and column processing

## Practice Questions

### Tracing Questions

1. What is the output?
```cpp
int arr[] = {5, 10, 15, 20};
cout << arr[1] + arr[3];
```

2. What does this function return when called with `mystery("hello")`?
```cpp
int mystery(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'l') count++;
    }
    return count;
}
```

3. After this code runs, what are the values of x and y?
```cpp
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int x = 5, y = 10;
swap(x, y);
```

### Writing Questions

1. Write a function `int findMax(int arr[], int size)` that returns the largest value in an array.

2. Write a function `bool isPalindrome(string s)` that returns true if the string is the same forwards and backwards.

3. Write code to calculate the sum of each row in a 3x4 2D array.

## Common Mistakes to Avoid

- Forgetting to include `#include <string>`
- Array index out of bounds
- Forgetting that arrays are passed by reference automatically
- Trying to return an array from a function
- Using `=` instead of `==` when comparing strings
- Off-by-one errors with string indices
