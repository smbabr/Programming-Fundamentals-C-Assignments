#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two magical numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("You just entered %d and %d. And guess what? Their sum is: %d\n", a, b, a + b);

    return 0;
}

