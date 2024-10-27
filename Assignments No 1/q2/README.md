# Square Calculator Program in C

## Overview
This program takes an integer input from the user and calculates its square, then displays the result. It is designed as a simple demonstration of basic C programming concepts, including variables, operators, and using `scanf` and `printf` functions for input and output.

## Concepts Used
- **Variables**: Used to store the integer input and its square.
- **Operators**: Multiplication operator `*` is used to calculate the square of the number.
- **`scanf` and `printf`**: `scanf` reads the input from the keyboard, and `printf` displays the output to the user.

## Code
```c

#include <stdio.h>

int main() {
    int num, square;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    square = num * num;
    printf("The square of %d is %d.\n", num, square);
    
    return 0;
}
```
## Usage

1. Run and Compile the program.
2. Enter an integer value when prompted.
3. The program will calculate and display the square of the entered integer.
