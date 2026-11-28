# DSA Practice Repository

Beginner-friendly C++ programs for practicing programming fundamentals, problem solving, and introductory data structures and algorithms. Each folder contains small, independent exercises.

## Repository Structure

```text
DSA/
├── README.md
├── Variable, Data types and Operators/demo.cpp
├── conditions-and-loops/main.cpp
├── functions/main.cpp
├── arrays/main.cpp
├── patterns/main.cpp
├── patterns/practice.cpp
├── kadaneAlghorithm/main.cpp
├── kadaneAlghorithm/practice.cpp
├── majorityElement/main.cpp
├── majorityElement/practive.cpp
└── timeSpace/main.cpp
```

## Topics Covered

### Variables, Data Types, and Operators

`Variable, Data types and Operators/demo.cpp` introduces basic output, variables, and a simple C++14 program.

### Conditions and Loops

`conditions-and-loops/main.cpp` demonstrates character checks, the ternary operator, `while`, `do-while`, and `for` loops, odd/even sums, prime checking, sums of numbers divisible by three, and factorial calculation.

### Functions

`functions/main.cpp` contains practice functions for addition, comparison, factorials, combinations using `nCr`, prime checking, and printing primes. It also contains unfinished exercises for digit sums and Fibonacci numbers.

### Arrays and Searching

`arrays/main.cpp` demonstrates scope, array traversal, linear search, finding minimum and maximum values with their indices, and checking repeated values. It also contains commented practice notes for postfix/prefix evaluation and balanced brackets.

### Patterns

The programs in `patterns/` practice nested loops and output formatting, including alphabet, number, star, pyramid, multiplication-table, and diamond-like patterns. `practice.cpp` provides interactive alphabet and star-pattern exercises.

### Maximum Subarray Sum

`kadaneAlghorithm/main.cpp` prints contiguous subarrays and practices maximum-subarray calculations with several sample arrays. `practice.cpp` applies a linear scan and reports the maximum sum together with its start and end indices.

### Pair Sum and Majority Element

`majorityElement/main.cpp` uses the two-pointer technique to find two values in a sorted array whose sum matches a target.

`majorityElement/practive.cpp` contains pair-sum practice plus sorting-based and Boyer–Moore voting implementations for finding a majority element. These majority algorithms assume that a valid majority element exists.

### Time and Space Basics

`timeSpace/main.cpp` is a minimal console-output program used as a starting point for discussing runtime and space complexity.

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
6. Pair sum and majority-element techniques
7. Maximum subarray-sum algorithms

## Notes

- Some exercises are intentionally incomplete or commented out for practice.
- Programs use console input and output through `cin` and `cout`.
- Compiled `.exe` files may be present, but the `.cpp` files are the source files used for learning and development.
- The project can be extended with strings, recursion, sorting, stacks, queues, and linked lists.

## Author

Created as part of a C++ and DSA learning journey.
