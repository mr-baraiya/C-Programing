# C Programming Language

## Overview
C is a powerful general-purpose programming language that is widely used for system programming, embedded systems, and application development. It provides low-level access to memory and efficient performance.

## Features
- Procedural programming paradigm
- Low-level memory manipulation
- Fast and efficient execution
- Rich standard library
- Portability across different platforms

## Basic Syntax
### Hello World Program
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

## Data Types in C
C provides various data types for handling different kinds of data.

| Data Type  | Description |
|------------|-------------|
| `int`      | Integer type |
| `float`    | Floating-point number |
| `char`     | Character type |
| `double`   | Double-precision floating-point number |
| `void`     | Empty type (used for functions with no return value) |

## Control Structures
### Conditional Statements
```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

### Loops
#### For Loop
```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);
}
```
#### While Loop
```c
int i = 0;
while (i < 10) {
    printf("%d ", i);
    i++;
}
```
#### Do-While Loop
```c
int i = 0;
do {
    printf("%d ", i);
    i++;
} while (i < 10);
```

## Functions
Functions allow code reuse and modular programming.
```c
#include <stdio.h>

void greet() {
    printf("Hello from function!\n");
}

int main() {
    greet();
    return 0;
}
```

## Pointers
Pointers store memory addresses and allow efficient memory manipulation.
```c
int a = 10;
int *p = &a;
printf("Value of a: %d", *p);
```

## Arrays
Arrays store multiple values of the same type in contiguous memory locations.
```c
int arr[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}
```

## Structures
Structures allow grouping of different data types.
```c
struct Student {
    char name[50];
    int age;
};
```

## File Handling
```c
#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "w");
    fprintf(file, "Hello, File Handling!");
    fclose(file);
    return 0;
}
```

## Summary
C is a fundamental programming language that serves as a foundation for many modern languages. Mastering C helps in understanding memory management, system programming, and algorithmic problem-solving.

