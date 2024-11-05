# Income Tax Calculator

## Problem Statement
A program in C that calculates the income tax based on the following criteria:
- **Income up to 250,000**: No tax.
- **Income from 250,001 to 500,000**: 5% tax.
- **Income from 500,001 to 1,000,000**: 10% tax.
- **Income above 1,000,000**: 15% tax.

## Concepts Used
- Nested `if-else` statements
- Arithmetic operations
- Format specifier `%d` for integer inputs

## Solution
This program uses nested `if-else` statements to determine the tax bracket based on the user's income. Each bracket has a corresponding tax rate, and the tax is calculated by applying the appropriate percentage. If the income falls within a certain range, the program calculates the tax and displays it to the user.

## Code

```c
#include <stdio.h>

int main() {
    int income;
    float tax = 0;

    printf("Enter your income: ");
    scanf("%d", &income);

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } else {
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
    }

    printf("Your calculated income tax is: %.2f\n", tax);

    return 0;
}
```

## Explanation

1. **Input**: The program prompts the user to enter their income, which is read as an integer using the `%d` format specifier.

2. **Tax Calculation**:
   - The program uses nested `if-else` statements to determine the tax bracket based on the income.
   - **No Tax**: If the income is up to 250,000, no tax is applied, so the `tax` variable remains 0.
   - **5% Tax**: If the income is between 250,001 and 500,000, a 5% tax is calculated only on the portion of income exceeding 250,000. The formula used is:
     ```c
     tax = (income - 250000) * 0.05;
     ```
   - **10% Tax**: For income between 500,001 and 1,000,000, the program first calculates a 5% tax on the range from 250,000 to 500,000, and then applies a 10% tax on the remaining amount above 500,000. The formula used is:
     ```c
     tax = (250000 * 0.05) + (income - 500000) * 0.10;
     ```
   - **15% Tax**: For income above 1,000,000, the program calculates a 5% tax for the range from 250,000 to 500,000, a 10% tax on the range from 500,000 to 1,000,000, and finally a 15% tax on any amount exceeding 1,000,000. The formula used is:
     ```c
     tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
     ```

3. **Output**: The calculated tax amount is displayed with two decimal places for clarity.



