#include <stdio.h>

int main() {
    int age;
    char seriousIllness;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 18) {
        if (age > 45) {
            printf("Have you had any serious illness (Y/N)? ");
            scanf(" %c", &seriousIllness);
            if (seriousIllness == 'Y' || seriousIllness == 'y') {
                printf("Not eligible for health insurance.\n");
            } else {
                printf("Eligible for health insurance.\n");
            }
        } else {
            printf("Eligible for health insurance.\n");
        }
    } else {
        printf("Not eligible for health insurance.\n");
    }

    return 0;
}

