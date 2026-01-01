# Topic 09: Searching and Sorting

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20251226110817160649/frame_1.webp" alt="Binary Search" width="650">
</p>
<p align="center"><em>Binary search divides the search space in half with each comparison</em></p>

## Learning Objectives

After completing this lesson, you will be able to:
- Implement linear search to find elements in an array
- Implement binary search for sorted arrays
- Understand the efficiency differences between search algorithms
- Implement selection sort and bubble sort
- Trace through sorting algorithms step by step
- Choose appropriate algorithms based on data characteristics

---

## Part 1: Introduction to Algorithms

### What is an Algorithm?

An algorithm is a step-by-step procedure for solving a problem. Good algorithms are:
- **Correct**: They produce the right answer
- **Efficient**: They use reasonable time and memory
- **Clear**: They are easy to understand and implement

### Why Study Searching and Sorting?

- Searching and sorting are fundamental operations in computing
- They appear in almost every real-world application
- Understanding them helps you think algorithmically
- They demonstrate important concepts like efficiency and trade-offs

---

## Part 2: Linear Search

<p align="center">
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20240506105158/Linear-Search-algorithm-banner-(1).webp" alt="Linear Search" width="650">
</p>
<p align="center"><em>Linear search checks each element sequentially from start to end</em></p>

### The Basic Idea

Linear search (also called sequential search) checks each element one by one until it finds what it's looking for or reaches the end.

### Implementation

```cpp
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Found! Return the index
        }
    }
    return -1;  // Not found
}
```

### How It Works

For array: `{5, 2, 8, 1, 9}`, searching for 8:

```
Step 1: Check arr[0] = 5. Is 5 == 8? No.
Step 2: Check arr[1] = 2. Is 2 == 8? No.
Step 3: Check arr[2] = 8. Is 8 == 8? Yes! Return 2.
```

### Efficiency

- **Best case**: Target is the first element (1 comparison)
- **Worst case**: Target is last or not present (n comparisons)
- **Average case**: About n/2 comparisons

Linear search works on **any array** - sorted or unsorted.

---

## Part 3: Binary Search

### The Basic Idea

Binary search works only on **sorted arrays**. It repeatedly divides the search space in half:
1. Look at the middle element
2. If it's the target, done!
3. If target is smaller, search the left half
4. If target is larger, search the right half

### Implementation

```cpp
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;  // Found!
        } else if (arr[mid] > target) {
            right = mid - 1;  // Search left half
        } else {
            left = mid + 1;  // Search right half
        }
    }
    return -1;  // Not found
}
```

### How It Works

For sorted array: `{1, 3, 5, 7, 9, 11, 13}`, searching for 9:

```
Initial: left=0, right=6
Step 1: mid=3, arr[3]=7. Is 7==9? No. 7<9, so search right.
        left=4, right=6
Step 2: mid=5, arr[5]=11. Is 11==9? No. 11>9, so search left.
        left=4, right=4
Step 3: mid=4, arr[4]=9. Is 9==9? Yes! Return 4.
```

### Efficiency

- **Best case**: Target is the middle element (1 comparison)
- **Worst case**: About log2(n) comparisons
- For 1000 elements: linear needs up to 1000 checks, binary needs at most 10!

---

## Part 4: Comparing Search Algorithms

| Algorithm | Works On | Best Case | Worst Case | Average Case |
|-----------|----------|-----------|------------|--------------|
| Linear    | Any array | O(1)     | O(n)       | O(n)         |
| Binary    | Sorted only | O(1)   | O(log n)   | O(log n)     |

### When to Use Which?

- **Linear Search**: Small arrays, unsorted data, searching once
- **Binary Search**: Large sorted arrays, frequent searches

### Practical Comparison

| Array Size | Linear (worst) | Binary (worst) |
|------------|----------------|----------------|
| 10         | 10             | 4              |
| 100        | 100            | 7              |
| 1,000      | 1,000          | 10             |
| 1,000,000  | 1,000,000      | 20             |

---

## Part 5: Selection Sort

### The Basic Idea

Selection sort repeatedly:
1. Find the minimum element in the unsorted portion
2. Swap it with the first unsorted element
3. Move the boundary between sorted and unsorted

### Implementation

```cpp
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find minimum in unsorted portion
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap minimum with first unsorted element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
```

### Step-by-Step Example

Sorting: `{64, 25, 12, 22, 11}`

```
Pass 1: Find min (11), swap with first
        {11, 25, 12, 22, 64}
         ^sorted

Pass 2: Find min in remaining (12), swap with second
        {11, 12, 25, 22, 64}
         ^^^^sorted

Pass 3: Find min in remaining (22), swap with third
        {11, 12, 22, 25, 64}
         ^^^^^^^sorted

Pass 4: Find min in remaining (25), already in place
        {11, 12, 22, 25, 64}
         ^^^^^^^^^^sorted

Done!
```

---

## Part 6: Bubble Sort

### The Basic Idea

Bubble sort repeatedly:
1. Compare adjacent elements
2. Swap them if they're in wrong order
3. "Bubble" larger elements to the end

### Implementation

```cpp
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

### Step-by-Step Example

Sorting: `{5, 1, 4, 2, 8}`

```
Pass 1: Compare and swap adjacent pairs
        5,1 -> swap -> {1, 5, 4, 2, 8}
        5,4 -> swap -> {1, 4, 5, 2, 8}
        5,2 -> swap -> {1, 4, 2, 5, 8}
        5,8 -> no swap
        After pass 1: {1, 4, 2, 5, 8}  (8 is in place)

Pass 2:
        1,4 -> no swap
        4,2 -> swap -> {1, 2, 4, 5, 8}
        4,5 -> no swap
        After pass 2: {1, 2, 4, 5, 8}  (5,8 in place)

Pass 3:
        1,2 -> no swap
        2,4 -> no swap
        After pass 3: {1, 2, 4, 5, 8}  (4,5,8 in place)

Done!
```

### Optimized Bubble Sort

We can stop early if no swaps were made in a pass:

```cpp
void bubbleSortOptimized(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;  // Array is sorted
    }
}
```

---

## Part 7: Comparing Sorting Algorithms

| Algorithm | Best Case | Average Case | Worst Case | Stable? |
|-----------|-----------|--------------|------------|---------|
| Selection | O(n^2)    | O(n^2)       | O(n^2)     | No      |
| Bubble    | O(n)*     | O(n^2)       | O(n^2)     | Yes     |

*With early termination optimization on already-sorted data

### What is Stability?

A stable sort preserves the relative order of equal elements.

Example: Sorting students by grade (when some have same grade)
- **Stable**: Students with same grade keep their original order
- **Unstable**: Students with same grade may be reordered

---

## Common Mistakes to Avoid

1. **Using binary search on unsorted data**
   ```cpp
   // WRONG - data must be sorted first!
   int arr[] = {5, 2, 8, 1, 9};
   binarySearch(arr, 5, 8);  // May give wrong answer
   ```

2. **Off-by-one errors in binary search**
   ```cpp
   // Be careful with left/right updates
   right = mid - 1;  // Not just mid
   left = mid + 1;   // Not just mid
   ```

3. **Forgetting the swap in sorting**
   ```cpp
   // Remember to use a temp variable
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
   ```

---

## Practice Checklist

Before moving to the exercises, make sure you can:

- [ ] Implement linear search
- [ ] Implement binary search
- [ ] Explain when to use each search algorithm
- [ ] Trace through selection sort step by step
- [ ] Trace through bubble sort step by step
- [ ] Identify the time complexity of each algorithm

---

## Next Steps

1. Study the [examples](examples/) in this lesson
2. Work through the [exercises](../exercises/) in order
3. Complete the [Sorting Visualizer mini-project](../mini-project/)
