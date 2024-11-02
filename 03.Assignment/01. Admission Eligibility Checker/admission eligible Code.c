#include <stdio.h>

int main() {
    float maths, science, total;

    printf("Enter marks obtained in Maths: ");
    scanf("%f", &maths);
    printf("Enter marks obtained in Science: ");
    scanf("%f", &science);

    total = maths + science;

    if (total >= 50) {
        printf("Eligible for admission.\n");

        if (total >= 80) {
            printf("Eligible for scholarship.\n");
        } else {
            printf("Not eligible for scholarship.\n");
        }
    } else {
        printf("Not eligible for admission.\n");
    }

    return 0;
}

