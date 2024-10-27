# Basic Calculator in C

This is a simple calculator program written in C. It takes two numbers and an arithmetic operator as input and performs the corresponding operation (addition, subtraction, multiplication, or division).

## Problem Statement

Write a program that:
- Takes two numbers and an operator (+, -, *, /) as input.
- Performs the specified arithmetic operation.
- Displays the result.

**Concepts Used**: Variables, arithmetic operators, and `if-else` statements.

## Code

```c
#include <stdio.h>

int main() {
    float num1, num2;
    char operator;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    if (operator == '+') {
        printf("Result: %.2f\n", num1 + num2);
    }
    else if (operator == '-') {
        printf("Result: %.2f\n", num1 - num2);
    }
    else if (operator == '*') {
        printf("Result: %.2f\n", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
```
## How to Use

1. Clone this repository to your local machine.

2. Compile the program.

3. Run the program

4. Follow the prompts to enter the first number, an operator, and the second number.

5.  View the result!

   ## Example Usage
   ```c
 Enter first number: 5
Enter an operator (+, -, *, /): *
Enter second number: 3
Result: 15.00
   ```
## Notes

1. This program includes basic error handling for division by zero.

2. Only supports the four main arithmetic operations: addition, subtraction, multiplication, and division.
