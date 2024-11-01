# Even or Odd Checker in C

This is a simple C program that checks whether a given integer is even or odd. The program takes an integer input from the user and uses the modulo operator to determine if it's even or odd.

## Problem Statement

Write a program that:
- Asks the user to input a number.
- Checks if the number is even or odd.
- Displays the result.

**Concepts Used**: Variables, modulo operator, and `if-else` structure.

## Code

```c
#include <stdio.h>

int main() {
    int number;


    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    }
    else {
        printf("The number %d is odd.\n", number);
    }

    return 0;
}
```
## How to Use
1. Clone this repository to your local machine.

2. Compile the program.

3. Run the program

4. Follow the prompt to enter an integer.

5. View the result showing whether the number is even or odd.

## Example Usage
```vbnet
Enter an integer: 7
The number 7 is odd.
```
## Notes
.The program uses only basic concepts: variables, modulo operator, and if-else statements.

.If the number entered is divisible by 2 (i.e., number % 2 == 0), it’s even; otherwise, it’s odd.
