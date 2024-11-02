# Electricity Bill Calculator

## Problem Statement

This program calculates the electricity bill based on the number of units consumed. The charging structure is as follows:

- **Units <= 100**: No charge.
- **Units 101-200**: 5 rupees per unit (only for units above 100).
- **Units 201-300**: 5 rupees for the first 100 units (above 100) and 8 rupees for units from 201 to 300.
- **Units above 300**: 5 rupees for the first 100 units (above 100), 8 rupees for the next 100 units (201 to 300), and 10 rupees for units above 300.

## Code Explanation

The program follows these steps:

1. Prompts the user to enter the number of units consumed.
2. Calculates the bill based on the defined rules:
   - For units less than or equal to 100, the bill is 0.
   - For units between 101 and 200, it calculates the charge for units above 100 at a rate of 5 rupees per unit.
   - For units between 201 and 300, it sums the charges for the first 100 units and then calculates charges for the additional units at a rate of 8 rupees per unit.
   - For units exceeding 300, it sums charges for the first 200 units and calculates the charge for the remaining units at a rate of 10 rupees per unit.

## Code

Here is the C code for the electricity bill calculator:

```c
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = 0;
    } else if (units <= 200) {
        bill = (units * 5) / 2; // Only charge for units above 100
    } else if (units <= 300) {
        bill = (100 * 5) + ((units - 200) * 8);
    } else {
        bill = (100 * 5) + (100 * 8) + ((units - 300) * 10);
    }

    printf("The electricity bill is: %.2f rupees\n", bill);

    return 0;
}
