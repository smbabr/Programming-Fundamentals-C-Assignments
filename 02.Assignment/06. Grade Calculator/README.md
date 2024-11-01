#  Grade Calculator

This C program asks for a student's marks in three subjects, calculates the average marks, and assigns a grade based on the following conditions:

- **Grade A:** Average >= 90
- **Grade B:** 80 <= Average < 90
- **Grade C:** 70 <= Average < 80
- **Grade D:** 60 <= Average < 70
- **Grade F:** Average < 60

## Code

```c
#include <stdio.h>

int main() {
    int mark1, mark2, mark3;
    float average;
    
    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    
    average = (mark1 + mark2 + mark3) / 3.0;

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    
    return 0;
}
```

## How to Use

1. Clone this code  to your local machine.

2. Compile  and  Run the program.

3. Input the marks for three subjects when prompted.
   The program will display the calculated grade based on the average marks.
