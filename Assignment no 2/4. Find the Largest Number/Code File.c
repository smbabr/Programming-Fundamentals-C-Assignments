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
