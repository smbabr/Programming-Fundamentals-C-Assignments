#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);
    
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "Babar") == 0) {
        if (strcmp(password, "6592") == 0) {
            printf("Login Successful\n");
        } else {
            printf("Login Failed: Incorrect password\n");
        }
    } else {
        printf("Login Failed: Incorrect username\n");
    }

    return 0;
}
