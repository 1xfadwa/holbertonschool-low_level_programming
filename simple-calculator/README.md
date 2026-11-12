# Simple Calculator

## Description
A simple command-line calculator written in C. It allows users to perform basic arithmetic operations through a menu.

## Compilation

Compile the program using GCC with strict compiler flags:

```bash
gcc -Wall -Wextra -Werror -pedantic calculator.c -o calculator
```

## How to Run

Run the compiled program:

```bash
./calculator
```

## Supported Operations

The calculator supports the following operations:

- **Addition (+):** Adds two numbers.
- **Subtraction (-):** Subtracts the second number from the first.
- **Multiplication (*):** Multiplies two numbers.
- **Division (/):** Divides the first number by the second.
- **Quit (0):** Exits the program.

## Numeric Behavior

- User inputs are read as integers (`int`).
- Addition, subtraction, and multiplication return integer results.
- Division uses `double` to support decimal results.
- Example: `10 / 4 = 2.5`.
- Division by zero is handled with an error message.

## Known Limitations

- Only integer inputs are supported.
- Decimal numbers cannot be entered as operands.
- Integer arithmetic may overflow when values exceed the supported range of `int`.
- Invalid non-numeric input terminates the program.
