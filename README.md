# ft_printf

## Project Overview
`ft_printf` is a custom implementation of the C standard library function `printf`. This project aims to develop a flexible and efficient version of `printf` that handles various data types and formats. The goal is to better understand variadic functions, format specifiers, and the inner workings of the `printf` function.

`ft_printf` supports a variety of format specifiers, including:

- `%c` – Print a single character.
- `%s` – Print a string.
- `%p` – Print a pointer address.
- `%d` / `%i` – Print an integer (signed).
- `%u` – Print an unsigned integer.
- `%x` / `%X` – Print an unsigned hexadecimal integer (lowercase/uppercase).
- `%f` – Print a floating-point number.
- `%%%` – Print a literal percent sign.

Additional specifiers or flags may be implemented, depending on your version of `ft_printf`.

## Requirements

- Implement a function that mimics the behavior of the standard `printf` function in C.
- Handle multiple format specifiers and support the following:
  - Width and precision.
  - Optional flags (e.g., `-`, `+`, `0`, `#`).
  - Support for various data types, such as integers, strings, and pointers.
  
### Supported Format Specifiers:
- **%c**: Print a single character.
- **%s**: Print a string.
- **%p**: Print a pointer.
- **%d**, **%i**: Print an integer.
- **%u**: Print an unsigned integer.
- **%x**, **%X**: Print an unsigned hexadecimal.
- **%f**: Print a floating-point number.
- **%%**: Print a percent sign (`%`).

## Compilation

To compile the project, use the following `make` command:

```bash
make
```
This will create the libftprintf.a static library (if your project includes a libft implementation) or an executable file containing your ft_printf function.

## Testing the Implementation

You can test the ft_printf function by creating a main.c file with different format specifiers and checking the output.

Example:
```c
#include "ft_printf.h"

int main() {
    int a = 42;
    char c = 'A';
    char *str = "Hello, world!";

    ft_printf("Character: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Integer: %d\n", a);
    ft_printf("Hexadecimal (lowercase): %x\n", a);
    ft_printf("Hexadecimal (uppercase): %X\n", a);
    ft_printf("Pointer: %p\n", &a);

    return 0;
}
```
Compile your test program:
```bash
gcc -o test main.c ft_printf.a
./test
```
This will display the results of the various format specifiers supported by your ft_printf implementation.
## Features

    Variadic Function: Uses stdarg.h to handle a variable number of arguments.
    Flexible Formatting: Supports a variety of format specifiers and optional flags.
    Memory Management: Efficient memory usage, ensuring minimal overhead.
    Customization: Easily extendable to add additional format specifiers or features.

## Installation

    Clone the repository:

git clone https://github.com/yourusername/ft_printf.git

Navigate to the project directory:

cd ft_printf

Build the project:
```bash
    make
```
    Link the compiled ft_printf.a library to your projects, or use it directly in your applications.

## Usage

Include the ft_printf.h header in your source file and use the ft_printf function as follows:

#include "ft_printf.h"

int main() {
    ft_printf("This is a character: %c\n", 'A');
    ft_printf("This is a string: %s\n", "Hello, World!");
    ft_printf("This is an integer: %d\n", 42);
    ft_printf("This is an unsigned integer: %u\n", 100);
    ft_printf("This is a pointer: %p\n", &main);
    return 0;
}

## Compilation Example:
```bash
gcc -o my_program my_program.c ft_printf.a
```
## Contributing

If you'd like to contribute to this project, you can:

    Fork the repository.
    Create a feature branch (git checkout -b new-feature).
    Commit your changes (git commit -am 'Add new feature').
    Push to your fork (git push origin new-feature).
    Open a pull request on GitHub.

## Acknowledgements
This project is a part of the 42 curriculum. Many thanks to the 42 community for the support and resources provided during the development of this project.

### What You Should Customize:
- The list of supported format specifiers depends on the features you've implemented. If you supported flags like `#`, `0`, `-`, or specific precision widths, you can add those details to the specifiers list.
- If your `ft_printf` supports additional or customized behavior (e.g., floating-point handling or alternative format specifiers), make sure to include those in the README as well.
- Update the test examples if you've implemented certain extensions or additional features.
  
Let me know if you need more adjustments or explanations!
