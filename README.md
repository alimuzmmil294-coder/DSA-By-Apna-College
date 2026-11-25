# DSA Practice Repository

This repository contains beginner-friendly C++ programs for learning programming fundamentals, problem solving, and introductory data structures and algorithms. Each folder contains small, independent practice programs.

## Repository Structure

```text
DSA/
├── README.md
├── Variable, Data types and Operators/
│   └── demo.cpp
├── conditions-and-loops/
│   └── main.cpp
├── functions/
│   └── main.cpp
├── arrays/
│   └── main.cpp
├── patterns/
│   ├── main.cpp
│   └── practice.cpp
└── kadaneAlghorithm/
    └── main.cpp
```

Compiled `.exe` files may also be present. The `.cpp` files are the source files used for learning and development.

## Topics Covered

### Variables, Data Types, and Operators

`Variable, Data types and Operators/demo.cpp` introduces basic C++ output, variables, and a simple C++14 program.

### Conditions and Loops

`conditions-and-loops/main.cpp` demonstrates character checks, the ternary operator, `while`, `do-while`, and `for` loops, odd and even sums, prime-number checking, sums of numbers divisible by three, and factorial calculation.

### Functions

`functions/main.cpp` contains practice functions for addition, comparison, factorials, combinations using `nCr`, prime checking, and printing primes up to a limit. It also contains an unfinished Fibonacci exercise.

### Arrays and Searching

`arrays/main.cpp` demonstrates array traversal, linear search, finding minimum and maximum values with their indices, and basic array comparisons. It also contains practice notes for postfix and prefix evaluation and balanced brackets.

### Patterns

The programs in `patterns/` practice nested loops and output formatting, including star patterns, alphabet squares and triangles, consecutive-number patterns, repeated-letter patterns, centered pyramids, multiplication tables, and a large diamond-like star pattern. `practice.cpp` provides additional interactive alphabet and star-pattern exercises.

### Kadane-Style Maximum Subarray Sum

`kadaneAlghorithm/main.cpp` calculates the maximum sum of contiguous subarrays using nested loops. The example uses `{1, 2, 3, 4, 5}`.

## How to Compile and Run

From the repository root, compile a source file with `g++`.

### Windows PowerShell

```powershell
g++ ".\conditions-and-loops\main.cpp" -o ".\conditions-and-loops\main.exe"
& ".\conditions-and-loops\main.exe"
```

For a folder name containing spaces, quote the path:

```powershell
g++ ".\Variable, Data types and Operators\demo.cpp" -o ".\Variable, Data types and Operators\demo.exe"
& ".\Variable, Data types and Operators\demo.exe"
```

### Linux and macOS

```bash
g++ "conditions-and-loops/main.cpp" -o "conditions-and-loops/main"
./conditions-and-loops/main
```

## Suggested Learning Order

1. Variables, data types, and operators
2. Conditions and loops
3. Functions
4. Arrays and linear search
5. Nested loops and patterns
6. Maximum subarray-sum algorithms

## Notes

- Some exercises are intentionally incomplete or commented out for practice.
- Programs use console input and output through `cin` and `cout`.
- The project can be extended with strings, recursion, sorting, stacks, queues, and linked lists.

## Author

Created as part of a C++ and DSA learning journey.
