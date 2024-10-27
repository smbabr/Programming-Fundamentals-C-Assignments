#include <stdio.h>

int main() {
    float C, F;
    printf("Celsius? ");
    scanf("%f", &C);
    F = C * 9 / 5 + 32;
    printf("Fahrenheit! %.2f\n", F);
    return 0;
}
