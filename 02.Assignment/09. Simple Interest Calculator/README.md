# Simple Interest Calculator

This C program calculates simple interest using the formula:

Simple Interest = (Principal × Rate × Time) / 100

## Code

```c
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    
    printf("Enter time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
```

## How to Use

1. Input Principal Amount: When prompted, enter the principal amount for which you want to calculate simple interest.

2. Input Rate of Interest: Enter the annual rate of interest.

3. Input Time Period: Provide the time period in years for which the interest is calculated.

4. View the Result: The program will display the calculated simple interest based on your inputs.

