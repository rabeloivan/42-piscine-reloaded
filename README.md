*This project has been created as part of the 42 curriculum by irabelo.*

# Piscine Reloaded

## Description

In this project, I solve a series of exercises in Shell and C to review the fundamentals learned during the Piscine.

The main concepts explored are **shell commands**, **file permissions**, **pointers**, **structures**, **memory allocation**, **function pointers** and **Makefiles**.

The project contains 28 exercises, from `ex00` to `ex27`, each in its own directory.

## Table of Contents

- [Exercise Overview](#exercise-overview)
  - [Shell Exercises](#shell-exercises)
  - [C Functions](#c-functions)
  - [Programs](#programs)
  - [Headers](#headers)
  - [Makefiles](#makefiles)
  - [Memory Management](#memory-management)
  - [Special Cases](#special-cases)
  - [Implementation Notes](#implementation-notes)
- [Instructions](#instructions)
  - [Requirements](#requirements)
  - [Compilation](#compilation)
  - [Installation](#installation)
  - [Usage](#usage)
- [Resources](#resources)
  - [Documentation and References](#documentation-and-references)
  - [AI Usage](#ai-usage)

## Exercise Overview

The exercises are organized into shell exercises, C functions, programs, headers and Makefiles.

### Shell Exercises

| Exercise | File | Description |
| --- | --- | --- |
| `ex00` | `exo.tar` | Archive created with `tar -cf exo.tar *`, containing files and directories with the permissions, sizes and modification dates shown by `ls -l` in the subject, together with a hard link and a symbolic link. |
| `ex01` | `z` | File whose content is `Z` followed by a newline, so `cat z` prints `Z`. |
| `ex02` | `clean` | Command that searches the current directory and its subdirectories for files whose names end with `~` or start and end with `#`, prints them and deletes them. |
| `ex03` | `find_sh.sh` | Script that finds the files ending in `.sh` in the current directory and its subdirectories, and prints their names without the extension. |
| `ex04` | `MAC.sh` | Script that prints the MAC addresses of the machine, taken from the `ether` lines of `ifconfig`. |
| `ex05` | `"\?$*'MaRViN'*$?\"` | File whose name is made of special shell characters, containing `42` without a trailing newline. |

### C Functions

As required by the subject, the function exercises contain only the requested function, without `main()`. The output functions call `ft_putchar()`, which is declared in each file but not defined in the repository: the subject states that the evaluation compiles them with its own `ft_putchar.c`, so a program that uses them must provide it (see [Usage](#usage)).

#### Output

**Prototypes:**
```c
void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_putstr(char *str);
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex06` | `ft_print_alphabet()` | Prints the lowercase alphabet, from `a` to `z`. | None. |
| `ex07` | `ft_print_numbers()` | Prints the digits from `0` to `9`. | None. |
| `ex08` | `ft_is_negative()` | Prints `N` if `n` is negative and `P` otherwise. | None. |
| `ex15` | `ft_putstr()` | Prints the string `str`. | None. |

#### Pointers

**Prototypes:**
```c
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex09` | `ft_ft()` | Sets the integer pointed to by `nbr` to `42`. | None. |
| `ex10` | `ft_swap()` | Swaps the values of the integers pointed to by `a` and `b`. | None. |
| `ex11` | `ft_div_mod()` | Stores the quotient of `a` divided by `b` in `*div` and the remainder in `*mod`. | None. |

#### Math

**Prototypes:**
```c
int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_sqrt(int nb);
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex12` | `ft_iterative_factorial()` | Calculates the factorial of `nb` with a loop. | The factorial, or `0` (see [Special Cases](#special-cases)). |
| `ex13` | `ft_recursive_factorial()` | Calculates the factorial of `nb` with **recursion**. | The factorial, or `0` (see [Special Cases](#special-cases)). |
| `ex14` | `ft_sqrt()` | Calculates the square root of `nb`. | The square root if it is an integer, or `0`. |

#### Strings

**Prototypes:**
```c
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex16` | `ft_strlen()` | Calculates the length of `str`, excluding the null terminator. | The length of `str`. |
| `ex17` | `ft_strcmp()` | Compares `s1` and `s2`. | The difference between the first two different characters, or `0` if the strings are equal. |

#### Memory Allocation

**Prototypes:**
```c
char	*ft_strdup(char *src);
int	*ft_range(int min, int max);
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex20` | `ft_strdup()` | Allocates a copy of `src`. | The copy, or `NULL` if the allocation fails. |
| `ex21` | `ft_range()` | Allocates an array with the integers from `min` to `max - 1`. | The array, or `NULL` if `min` is greater than or equal to `max` or if the allocation fails. |

#### Function Pointers

**Prototypes:**
```c
void	ft_foreach(int *tab, int length, void (*f)(int));
int	ft_count_if(char **tab, int (*f)(char *));
```

| Exercise | Function | Description | Return Value |
| --- | --- | --- | --- |
| `ex25` | `ft_foreach()` | Applies `f` to each of the first `length` integers of `tab`. | None. |
| `ex26` | `ft_count_if()` | Applies `f` to each string of `tab`, an array that ends with `NULL`. | The number of strings for which `f` returns `1`. |

### Programs

| Exercise | File | Description |
| --- | --- | --- |
| `ex18` | `ft_print_params.c` | Prints each command-line argument, except the program name, on its own line. |
| `ex19` | `ft_sort_params.c` | Prints the command-line arguments, except the program name, in ASCII order, one per line. |
| `ex27` | `main.c` | Source of `ft_display_file`, which prints the contents of the file given as an argument. |

### Headers

| Exercise | File | Description |
| --- | --- | --- |
| `ex22` | `ft_abs.h` | Defines the macro `ABS`, which evaluates to the absolute value of its argument. |
| `ex23` | `ft_point.h` | Defines the structure `t_point`, with two `int` fields, `x` and `y`, so that the `main()` given in the subject compiles. |

```c
# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))
```

```c
typedef struct s_point
{
	int	x;
	int	y;
}	t_point;
```

**Note:** A macro with arguments, such as `ABS`, is normally forbidden by the Norm. As the subject points out, `ex22` is the only exercise where it is allowed.

### Makefiles

| Exercise | Output | Description |
| --- | --- | --- |
| `ex24` | `libft.a` | Compiles `ft_putchar.c`, `ft_putstr.c`, `ft_strcmp.c`, `ft_strlen.c` and `ft_swap.c` from the `srcs` directory, with the headers from the `includes` directory, into a static library. |
| `ex27` | `ft_display_file` | Compiles `main.c` into the program `ft_display_file`. |

As stated in the subject, only the `ex24` `Makefile` is evaluated, with the evaluation's own source files and headers, so they are not part of the repository. As required by the subject, the `ex24` `Makefile` implements the `all`, `clean`, `fclean` and `re` rules, and the `ex27` `Makefile` implements the `all`, `clean` and `fclean` rules.

### Memory Management

**Functions:** `ft_strdup()` and `ft_range()`.

These functions return newly allocated memory. The caller must free the results when they are no longer needed. If an allocation fails, they return `NULL`.

The other exercises do not use dynamic memory allocation. In `ft_display_file`, where the subject forbids `malloc()`, the file is read into a fixed-size array on the stack (see [Implementation Notes](#implementation-notes)).

### Special Cases

#### `NULL` Arguments

- `ft_ft()`, `ft_swap()`, `ft_div_mod()`, `ft_putstr()` and `ft_foreach()` — do nothing when a pointer argument is `NULL`.
- `ft_count_if()` — returns `0` when a pointer argument is `NULL`.
- `ft_strlen()`, `ft_strcmp()` and `ft_strdup()` — do not check for `NULL`, like the originals: passing `NULL` to them is undefined behavior.

#### Division by Zero

`ft_div_mod()` does nothing when `b` is `0`, so `*div` and `*mod` keep their previous values.

#### Factorials and Square Roots

- `ft_iterative_factorial()` and `ft_recursive_factorial()` — return `1` when `nb` is `0`, and `0` when `nb` is negative or greater than `12`.
- `ft_sqrt()` — returns `0` when `nb` has no integer square root, which includes negative numbers.

#### `ft_display_file` Errors

When the arguments are invalid or the file cannot be opened or read, `ft_display_file` writes the error message required by the subject to standard error, followed by a newline, and returns `1`:

- **No argument** — `File name missing.`
- **More than one argument** — `Too many arguments.`
- **File that cannot be opened or read** — `Cannot read file.`

**Example:**
```sh
./ft_display_file
./ft_display_file a b
./ft_display_file missing.txt
```

**Output:**
```
File name missing.
Too many arguments.
Cannot read file.
```

### Implementation Notes

- **`static` helpers** — helper functions are declared `static`, which limits them to their own file: `ft_putstr()` in `ft_print_params.c`, `ft_strcmp()`, `ft_putstr()` and `ft_print_args()` in `ft_sort_params.c`, `ft_strlen()` and `ft_strcpy()` in `ft_strdup.c`, and `ft_error()` and `ft_validate_and_open()` in the `main.c` of `ex27`.
- **Iteration and recursion** — `ft_iterative_factorial()` multiplies the values in a loop, while `ft_recursive_factorial()` calls itself with `nb - 1` until it reaches `0`.
- **Square root without overflow** — the loop condition `root <= nb / root` guarantees that `root * root` never exceeds `nb`, so `ft_sqrt()` compares `root * root` with `nb` without overflow.
- **No wildcards** — the `ex24` `Makefile` lists each source file explicitly, as the subject warns against wildcards.
- **Sorting** — `ft_sort_params.c` compares each argument with all the following ones and swaps them in `argv` when they are out of order, then prints the sorted arguments.
- **Reading in blocks** — `ft_display_file` reads the file with `read()` in blocks of `BUFFER_SIZE` (4096) bytes and writes each block with `write()`, so it can display files of any size without dynamic memory allocation. The file is closed with `close()` at the end.

## Instructions

### Requirements

The following tools are required to compile the project:

- `cc` — a C compiler (e.g., Clang on macOS or GCC on Linux).
- `make` — automates the build.
- `ar` — creates the static library archive.
- `sh` — runs the shell scripts, which the subject requires to be executable with `/bin/sh`.

### Compilation

The function exercises have no `Makefile`: they are compiled together with your own `main.c`, as shown in [Usage](#usage). The two exercises with a `Makefile` are compiled as follows.

#### Static Library (`ex24`)

From the `ex24` directory, with the source files in `srcs` and the headers in `includes`, run:

```sh
make
```

This command compiles the source files with the `-Wall -Wextra -Werror` flags and creates the static library `libft.a`.

The following `Makefile` targets are also available:

| Command | Description |
| --- | --- |
| `make` or `make all` | Compiles the library. |
| `make clean` | Removes the object files (`.o`). |
| `make fclean` | Removes the object files (`.o`) and `libft.a`. |
| `make re` | Removes the generated files and recompiles the library from scratch. |

#### Program (`ex27`)

From the `ex27` directory, run:

```sh
make
```

This command compiles `main.c` with the `-Wall -Wextra -Werror` flags and creates the program `ft_display_file`.

The following `Makefile` targets are also available:

| Command | Description |
| --- | --- |
| `make` or `make all` | Compiles the program. |
| `make clean` | Removes the object files (`.o`). |
| `make fclean` | Removes the object files (`.o`) and `ft_display_file`. |

### Installation

No installation is required. Each exercise is used directly from its own directory, as shown in [Usage](#usage) below.

### Usage

The output functions call `ft_putchar()`, so your program must define it. For example, a `main.c` file:

```c
#include <stdlib.h>
#include <unistd.h>

void	ft_print_alphabet(void);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, Piscine Reloaded");
	if (!str)
		return (1);
	ft_putstr(str);
	ft_putchar('\n');
	free(str);
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
```

Assuming `main.c` is located in the root directory of the repository, compile it with the exercise files:

```sh
cc -Wall -Wextra -Werror main.c ex06/ft_print_alphabet.c ex15/ft_putstr.c ex20/ft_strdup.c -o example
```

Run the resulting executable:

```sh
./example
```

**Output:**
```
Hello, Piscine Reloaded
abcdefghijklmnopqrstuvwxyz
```

**Notes:**

- `main.c` — declares the prototypes of the exercise functions and defines `ft_putchar()`.
- `-o example` — sets the name of the resulting executable.

The programs in `ex18` and `ex19` also call `ft_putchar()`. With `ft_putchar()` defined in an `ft_putchar.c` file, `ft_sort_params.c` is compiled and run as follows:

```sh
cc -Wall -Wextra -Werror ex19/ft_sort_params.c ft_putchar.c -o sort_params
./sort_params banana apple cherry
```

**Output:**
```
apple
banana
cherry
```

After compiling `ex27`, `ft_display_file` prints the file given as an argument:

```sh
printf 'Hello, Piscine Reloaded\n' > hello.txt
./ft_display_file hello.txt
```

**Output:**
```
Hello, Piscine Reloaded
```

## Resources

### Documentation and References

#### Previous Work

- [42-piscine](https://github.com/rabeloivan/42-piscine) — my exercises from the Piscine, used as a reference for this project.

#### Video Tutorials

- [De aluno para aluno](https://www.youtube.com/@DeAlunoParaAluno) — YouTube channel used to study the fundamentals of C.

### AI Usage

No AI tools were used to write the project's code or to learn the concepts behind the project.