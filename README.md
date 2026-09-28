# GKKKDC Batch 3 — Object-Oriented Programming

C++ class examples for GKKKDC Batch 3. Each numbered file is a short, standalone program that introduces one idea: a class, objects, member functions, encapsulation, and constructors.

The project is set up for **g++** (MinGW on Windows) and the C/C++ Runner extension in VS Code / Cursor.

## Programs

| File | Topic | What it does |
| --- | --- | --- |
| [1.cpp](1.cpp) | Class and object | Defines a `Student` with public `name` and `roll_no`, then creates one object, assigns values, and prints them. |
| [2.cpp](2.cpp) | Member function | Defines a `Car` with `model`, `make`, and `start()`. Two cars (Honda 2020 and Toyota 2010) each call `start()`, which prints the details and a start message. |
| [3.cpp](3.cpp) | Multiple objects | Creates two `Student` objects (`name`, `roll_no`, `marks`), prints each student's details, and prints the sum of their marks. |
| [4.cpp](4.cpp) | Encapsulation | Keeps `name` and `roll_no` private. Setters accept a name only when it is longer than 2 characters, and a roll number only when it is between 1 and 999. Getters return the stored values. The sample roll number `2000` is rejected. |
| [5.cpp](5.cpp) | Validated data and a calculation | A `Rectangle` stores `length` and `width` in feet. Setters reject non-positive values. Getters return the size in inches (feet × 12). `main` uses 10 by 5 and prints the area in square inches. |
| [6.cpp](6.cpp) | Default constructor | The `Student` constructor runs as each object is created. It prints `Object Created` and sets `roll_no` to `0` and `name` to `NotSetYet`. Four objects are created, then the first student's name is printed. |
| [7.cpp](7.cpp) | Constructor overloading | `Student` has four constructors: a default constructor, `(roll number, name)`, `(name, roll number)`, and `(name, roll number, address)`. `printDetails()` prints the stored fields. `main` creates one student with each constructor. |

## How to compile and run

From this folder, compile one file at a time:

```bash
g++ 1.cpp -o 1
```

On Windows, run the program with:

```bash
.\1.exe
```

Replace `1` with `2` through `7` to build the other programs. Each file has its own `main`, so compile them separately.

## Requirements

- A C++ compiler on your `PATH`, such as [MinGW](https://www.mingw-w64.org/) `g++`
- Optional: the C/C++ extension and C/C++ Runner in VS Code or Cursor (see `.vscode`)
