# Parsons Problems: Strings and 2D Arrays

Arrange the code blocks in the correct order to create working programs.

---

## Problem 1: String Length and Access

Arrange these blocks to display string info.

```cpp
// Block A
cout << "First: " << word[0] << '\n';
cout << "Last: " << word[word.length() - 1] << '\n';

// Block B
#include <iostream>
#include <string>
using namespace std;

// Block C
int main() {
    string word = "Programming";
    cout << "Length: " << word.length() << '\n';

// Block D
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: B, C, A, D

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "Programming";
    cout << "Length: " << word.length() << '\n';
    cout << "First: " << word[0] << '\n';
    cout << "Last: " << word[word.length() - 1] << '\n';
    return 0;
}
```

**Output:**
```
Length: 11
First: P
Last: g
```
</details>

---

## Problem 2: Count Vowels

Arrange these blocks to count vowels in a string.

```cpp
// Block A
for (char c : text) {
    char lower = tolower(c);
    if (lower == 'a' || lower == 'e' || lower == 'i' ||
        lower == 'o' || lower == 'u') {
        count++;
    }
}

// Block B
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

// Block C
string text = "Hello World";
int count = 0;

// Block D
cout << "Vowels: " << count << '\n';
return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: B, C, A, D

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "Hello World";
    int count = 0;
    for (char c : text) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            count++;
        }
    }
    cout << "Vowels: " << count << '\n';
    return 0;
}
```

**Output:** `Vowels: 3`
</details>

---

## Problem 3: Find Substring

Arrange these blocks to search for a substring.

```cpp
// Block A
if (pos != string::npos) {
    cout << "Found at position " << pos << '\n';
} else {
    cout << "Not found\n";
}

// Block B
size_t pos = sentence.find(target);

// Block C
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "The quick brown fox";
    string target = "brown";

// Block D
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence = "The quick brown fox";
    string target = "brown";
    size_t pos = sentence.find(target);
    if (pos != string::npos) {
        cout << "Found at position " << pos << '\n';
    } else {
        cout << "Not found\n";
    }
    return 0;
}
```

**Output:** `Found at position 10`
</details>

---

## Problem 4: 2D Array Declaration

Arrange these blocks to create and display a 2D array.

```cpp
// Block A
for (int r = 0; r < 2; r++) {
    for (int c = 0; c < 3; c++) {
        cout << grid[r][c] << " ";
    }
    cout << '\n';
}

// Block B
int grid[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

// Block C
#include <iostream>
using namespace std;

int main() {

// Block D
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
#include <iostream>
using namespace std;

int main() {
    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << grid[r][c] << " ";
        }
        cout << '\n';
    }
    return 0;
}
```

**Output:**
```
1 2 3
4 5 6
```
</details>

---

## Problem 5: 2D Array Sum

Arrange these blocks to calculate the sum of a 2D array.

```cpp
// Block A
cout << "Sum: " << sum << '\n';
return 0;
}

// Block B
for (int r = 0; r < 3; r++) {
    for (int c = 0; c < 3; c++) {
        sum += matrix[r][c];
    }
}

// Block C
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

// Block D
int sum = 0;
```

<details>
<summary>Solution</summary>

Correct order: C, D, B, A

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            sum += matrix[r][c];
        }
    }
    cout << "Sum: " << sum << '\n';
    return 0;
}
```

**Output:** `Sum: 45`
</details>

---

## Problem 6: Reverse String

Arrange these blocks to reverse a string.

```cpp
// Block A
string original = "Hello";
string reversed = "";

// Block B
for (int i = original.length() - 1; i >= 0; i--) {
    reversed += original[i];
}

// Block C
cout << "Original: " << original << '\n';
cout << "Reversed: " << reversed << '\n';
return 0;
}

// Block D
#include <iostream>
#include <string>
using namespace std;

int main() {
```

<details>
<summary>Solution</summary>

Correct order: D, A, B, C

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string original = "Hello";
    string reversed = "";
    for (int i = original.length() - 1; i >= 0; i--) {
        reversed += original[i];
    }
    cout << "Original: " << original << '\n';
    cout << "Reversed: " << reversed << '\n';
    return 0;
}
```

**Output:**
```
Original: Hello
Reversed: olleH
```
</details>

---

## Problem 7: 2D Array Row Sum

Arrange these blocks to calculate each row's sum.

```cpp
// Block A
for (int r = 0; r < 2; r++) {
    int rowSum = 0;
    for (int c = 0; c < 3; c++) {
        rowSum += data[r][c];
    }
    cout << "Row " << r << " sum: " << rowSum << '\n';
}

// Block B
int data[2][3] = {
    {10, 20, 30},
    {40, 50, 60}
};

// Block C
#include <iostream>
using namespace std;

int main() {

// Block D
    return 0;
}
```

<details>
<summary>Solution</summary>

Correct order: C, B, A, D

```cpp
#include <iostream>
using namespace std;

int main() {
    int data[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    for (int r = 0; r < 2; r++) {
        int rowSum = 0;
        for (int c = 0; c < 3; c++) {
            rowSum += data[r][c];
        }
        cout << "Row " << r << " sum: " << rowSum << '\n';
    }
    return 0;
}
```

**Output:**
```
Row 0 sum: 60
Row 1 sum: 150
```
</details>

---

## Problem 8: String to Uppercase

Arrange these blocks to convert a string to uppercase.

```cpp
// Block A
for (int i = 0; i < text.length(); i++) {
    text[i] = toupper(text[i]);
}

// Block B
cout << "Uppercase: " << text << '\n';
return 0;
}

// Block C
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

// Block D
string text = "hello world";
cout << "Original: " << text << '\n';
```

<details>
<summary>Solution</summary>

Correct order: C, D, A, B

```cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text = "hello world";
    cout << "Original: " << text << '\n';
    for (int i = 0; i < text.length(); i++) {
        text[i] = toupper(text[i]);
    }
    cout << "Uppercase: " << text << '\n';
    return 0;
}
```

**Output:**
```
Original: hello world
Uppercase: HELLO WORLD
```
</details>
