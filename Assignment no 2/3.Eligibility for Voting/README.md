# Voting Eligibility Checker

This program determines whether a person is eligible to vote based on their age. The minimum age required for voting is 18 years.

## Problem Statement

Write a program that:
- Takes a person's age as input.
- Determines if they are eligible to vote (age must be 18 or above).
- Displays an appropriate message based on the eligibility.

**Concepts Used**: Variables, relational operators, and `if-else` statements.

## Code

```c
#include <stdio.h>

int main() {
    int age;

    // Input: Taking the age as input from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Process and Output: Checking voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
```
## How to Use
1.Clone this repository to your local machine.

2.Compile the program and Run the Program.

3.Enter the age when asked

4. View  the eligibility message!

## Usage
```C
Enter your age: 20
You are eligible to vote.

Enter your age: 16
You are not eligible to vote.
```

## Notes
1.This program checks if the age is 18 or above to determine voting eligibility.

2.It uses simple conditional logic to provide feedback based on user input.
