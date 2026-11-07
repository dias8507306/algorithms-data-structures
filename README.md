# Algorithms and Data Structures (C++ labs)

University lab work for the *Algorithms and Data Structures* course, in C++. It covers arrays and dynamic memory, file streams, classes and inheritance, and the STL (`vector`, `list`, `queue`, `stack`, `<algorithm>`). "Мысал" folders hold the worked examples from the lab manual; "variant4" folders hold my individual assignment (variant 4).

## Labs

| Lab | Topic | Example(s) | Variant 4 (individual task) |
|---|---|---|---|
| [01](labs/lab01-arrays) | Arrays | `max_sum_5_elements.cpp`: 5 consecutive elements with the maximum sum | `remove_first_negative.cpp`: delete the first negative element (Lab 2 variant 4 was the same task, so it is stored once) |
| [02](labs/lab02-file-streams) | File streams (`ifstream` / `ofstream`) | read numbers from a file · write lines to a file · max-sum window read from `arr.txt`, result written to `rez.txt` | n/a |
| [03](labs/lab03-classes) | Classes, encapsulation | `students.cpp`: `Student` class, filter by faculty / year | `workers.cpp`: `Worker` class, filter by experience, salary, position |
| [04](labs/lab04-classes-and-files) | Classes + files | `students_from_file.cpp`: load students from `students.txt` | `workers_file.cpp`: save / load workers to `workers.txt` and query them |
| [05](labs/lab05-dynamic-arrays) | Dynamic arrays | `remove_equal_to_first.cpp`: remove all elements equal to the first one (`new[]`) | `remove_mean_element.cpp`: remove elements equal to the mean (`vector`, `remove_if`) |
| [08](labs/lab08-stl-vector) | STL `vector`, iterators | `vector_double.cpp`, `vector_iterator.cpp` | n/a |
| [11](labs/lab11-queue) | STL `queue` | `queue_basics.cpp`: push / front / pop · `reverse_queue_with_stack.cpp` | n/a |
| [14](labs/lab14-stl-algorithms) | STL algorithms | `find`, `binary_search`, selection sort with `min_element`, `generate_n` + `sort` for `vector` and `list` | `sort_anti_diagonal.cpp`: sort the anti-diagonal of a matrix |

## Other practice projects

| Project | What it does |
|---|---|
| [project01](projects/project01-matrix-delete-row) | dynamic 2D matrix: delete row *k* |
| [project02](projects/project02-matrix-add-column) | dynamic 2D matrix: append a column, free memory correctly |
| [project03](projects/project03-inheritance-articles) | inheritance: `Article` -> `Scientific`, `News` (constructors, copy constructor, destructors) |
| [project04](projects/project04-apartments-vector) | `vector<House>`: filter apartments by rooms / floor / area |
| [project05](projects/project05-sort-main-diagonal) | sort the main diagonal of a matrix |
| [project10](projects/project10-std-list) | `std::list` iteration (the original draft did not compile and was fixed) |
| [project11](projects/project11-gcd-recursive) | recursive Euclidean GCD |

## Tech stack

C++17 (written in Visual Studio / MSVC; also builds with g++ / clang), STL

## How to run

Build everything with g++ (Linux, macOS, or Windows with MSYS2 / MinGW):

```bash
./build_all.sh                # compiles all 28 programs into ./bin
./bin/projects_project11-gcd-recursive_gcd.exe
```

Or compile one file:

```bash
g++ -std=c++17 labs/lab14-stl-algorithms/variant4/sort_anti_diagonal.cpp -o sort && ./sort
```

Programs that read data files (`somefile.txt`, `arr.txt`, `students.txt`, `workers.txt`) must be run from their own folder.

Notes: the original Visual Studio `.sln` / `.vcxproj` files and build outputs are not included. A few small portability fixes were made for g++: `void main` changed to `int main`, and missing `<cstring>` / `<algorithm>` includes were added.

> All data in this repository is randomly generated; brand names are anonymized. The names in the sample `.txt` files are fictional textbook examples.

Author: Dias Ayazbay.

## Кратко (RU)

Лабораторные работы по дисциплине «Алгоритмы и структуры данных» на C++.
Темы: массивы, динамическая память, работа с файлами, классы и наследование, STL (vector, list, queue, stack, algorithm).
В папках «Мысал» — методические примеры, в папках «variant4» — мои решения 4-го варианта.
