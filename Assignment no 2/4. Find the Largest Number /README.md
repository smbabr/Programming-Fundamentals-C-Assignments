# Find the Largest Number in C

This program takes three numbers as input and determines which number is the largest among them.

## Problem Statement

Write a program that:
- Takes three numbers as input.
- Determines which number is the largest.

**Concepts Used**: Variables, relational operators, and nested `if-else` statements.

## Code

```c
#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Enter third number: ");
    scanf("%f", &num3);

    if (num1 >= num2) {
        if (num1 >= num3) {
            printf("Largest number is: %.2f\n", num1);
        } else {
            printf("Largest number is: %.2f\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("Largest number is: %.2f\n", num2);
        } else {
            printf("Largest number is: %.2f\n", num3);
        }
    }

    return 0;
}
```
## How to Use
1. Clone this repository to your local machine.

2. Compile the program and Run the Program.

3. Enter three Number and see the result!

## Usage
```C
Enter first number: 10
Enter second number: 25
Enter third number: 15
Largest number is: 25.00
```
## Notes
1. This program handles equal numbers correctly by using >= in the comparisons.
