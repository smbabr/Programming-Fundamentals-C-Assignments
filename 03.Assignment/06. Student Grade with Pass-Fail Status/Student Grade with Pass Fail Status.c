#include <stdio.h>

int main() {
    float marks1, marks2, marks3, average;
    char grade;

    printf("Enter marks for three subjects (out of 100):\n");
    printf("Subject 1: ");
    scanf("%f", &marks1);
    printf("Subject 2: ");
    scanf("%f", &marks2);
    printf("Subject 3: ");
    scanf("%f", &marks3);

    average = (marks1 + marks2 + marks3) / 3;

    if (average < 50) {
        printf("Average: %.2f - Status: Fail\n", average);
    } else {
        if (average > 75) {
            grade = 'A';
        } else {
            grade = 'B';
        }
        printf("Average: %.2f - Status: Pass - Grade: %c\n", average, grade);
    }

    return 0;
}

