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
This will create the libftprintf.a static library (if your project includes a libft implementation) or an executable file containing your ft_printf function.
