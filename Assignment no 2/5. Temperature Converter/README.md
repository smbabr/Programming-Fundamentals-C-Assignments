# Temperature Converter in C

This program converts temperature from Celsius to Fahrenheit and vice versa based on user input.

## Problem Statement

Write a program that:
- Converts Celsius to Fahrenheit.
- Converts Fahrenheit to Celsius.
- Displays the result based on user choice.

**Formulas**:
- Fahrenheit = (Celsius × 9/5) + 32
- Celsius = (Fahrenheit - 32) × 5/9

**Concepts Used**: Variables, arithmetic operators, and `if-else` statements.

## Code

```c
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    char choice;

    printf("Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: ");
    scanf(" %c", &choice);

    if (choice == 'C' || choice == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    } 
    else if (choice == 'F' || choice == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", celsius);
    } 
    else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }

    return 0;
}
```
## How to Use
1. Clone this repositry to your local machine.

2. Compile and Run the program.

3. Follow the prompts to enter your choice of conversion and the temperature.

4. View the result!

## Usage
```C
Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: C
Enter temperature in Celsius: 25
Temperature in Fahrenheit: 77.00
```
## Notes
1.The program performs basic validation on user input.

2.It allows conversions in both directions (Celsius to Fahrenheit and vice versa).
