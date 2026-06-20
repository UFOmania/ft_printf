# ft_printf

A custom implementation of the standard C `printf()` function.

## About

The goal of this project is to recreate the behavior of the original `printf` while learning about variadic functions, formatted output, and data conversion in C.

## Supported Conversions

| Specifier | Description              |
| --------- | ------------------------ |
| `%c`      | Character                |
| `%s`      | String                   |
| `%p`      | Pointer address          |
| `%d`      | Signed decimal integer   |
| `%i`      | Signed integer           |
| `%u`      | Unsigned decimal integer |
| `%x`      | Lowercase hexadecimal    |
| `%X`      | Uppercase hexadecimal    |
| `%%`      | Percent sign             |

## Build

Compile the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Rebuild everything:

```bash
make re
```

## Usage

Include the header:

```c
#include "ft_printf.h"
```

Example:

```c
ft_printf("Hello %s!\n", "World");
ft_printf("Number: %d\n", 42);
ft_printf("Hex: %x\n", 255);
```

Compile with:

```bash
cc main.c libftprintf.a
```

## Learning Objectives

* Variadic functions (`stdarg.h`)
* String formatting
* Number conversion
* Hexadecimal representation
* Memory and output management
