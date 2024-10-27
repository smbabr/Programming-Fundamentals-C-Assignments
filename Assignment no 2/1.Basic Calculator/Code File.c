#include <stdio.h>

int main() {
    float num1, num2;
    char operator;


    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    if (operator == '+') {
        printf("Result: %.2f\n", num1 + num2);
    }
    else if (operator == '-') {
        printf("Result: %.2f\n", num1 - num2);
    }
    else if (operator == '*') {
        printf("Result: %.2f\n", num1 * num2);
    }
    else if (operator == '/') {
        if (num2 != 0) {
            printf("Result: %.2f\n", num1 / num2);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}
