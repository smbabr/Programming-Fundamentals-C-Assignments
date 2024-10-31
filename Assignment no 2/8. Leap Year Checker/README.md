# Leap Year Checker

This C program takes a year as input and checks whether it is a leap year based on the following conditions:

- A year is a leap year if it is divisible by 4.
- However, it should not be divisible by 100 unless it is also divisible by 400.

## Code

```c
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                printf("%d is a leap year.\n", year);
            else
                printf("%d is not a leap year.\n", year);
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
```

## How to Use

1. Input the Year: When prompted, enter the year you want to check.

2. Check the Leap Year: The program will evaluate the input year against the leap year conditions.

3. View the Result: The program will display whether the entered year is a leap year or not.

4. Repeat as Needed: You can run the program again to check different years.
