# Login System

This C program prompts the user to enter a username and password. If the username is "admin" and the password is "1234", it prints "Login Successful". Otherwise, it provides feedback based on the input.

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

    if (strcmp(username, "admin") == 0) {
        if (strcmp(password, "1234") == 0) {
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
1. Input Username: When prompted, enter the username. The correct username is "admin".

2. Input Password: Enter the password. The correct password is "1234".

3. Check Login Status: The program will indicate whether the login was successful or failed, providing specific feedback based on the incorrect input.

4. Terminate the Program: After the login attempt, the program will end.
