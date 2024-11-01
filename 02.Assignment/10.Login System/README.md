# Login System

This C program prompts the user to enter a username and password. If the username is "Babar" and the password is "6592", it prints "Login Successful". Otherwise, it provides feedback based on the input.

## Code

```c
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
```

## How to Use

1. Input Username: When prompted, enter the username. The correct username is "Babar".

2. Input Password: Enter the password. The correct password is "6592".

3. Check Login Status: The program will indicate whether the login was successful or failed, providing specific feedback based on the incorrect input.

4. Terminate the Program: After the login attempt, the program will end.
