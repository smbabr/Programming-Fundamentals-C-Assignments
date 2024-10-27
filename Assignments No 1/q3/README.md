# (3) Temperature Converter

This  contains a C program that reads a temperature value in Celsius from the keyboard and displays its equivalent temperature in Fahrenheit. The program demonstrates the use of basic concepts such as variables, operators, and input/output functions (`scanf` and `printf`).

## Program Description

The program performs the following tasks:

1. Prompts the user to enter a temperature value in Celsius.
2. Converts the Celsius temperature to Fahrenheit using the formula:
   \[
   \text{Fahrenheit} = (\text{Celsius} \times \frac{9}{5}) + 32
   \]
3. Displays the converted temperature in Fahrenheit.

## Concepts Used

- **Variables**: Used to store the temperature values in Celsius and Fahrenheit.
- **Operators**: Basic arithmetic operations to perform the conversion.
- **Input/Output Functions**:
  - `scanf`: To read the temperature input from the user.
  - `printf`: To display the output temperature.

# Code
```C
#include <stdio.h>

int main() {
    float C, F;
    printf("Celsius? ");
    scanf("%f", &C);
    F = C * 9 / 5 + 32;
    printf("Fahrenheit! %.2f\n", F);
    return 0;
}
```
## Usage

1. Run and the Compile Program.

2.  Enter the value in celcius

3.   Then it will converts to Farhrenhiet

4.    It will display the result
