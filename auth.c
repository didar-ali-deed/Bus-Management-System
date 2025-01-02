#include "auth.h"
#include <stdio.h>
#include <string.h>

int check_authorization() {
    char staff[3][20] = {"Didar", "Maaz", "Maimoona"};
    char passwords[3][20] = {"2007", "2037", "2094"};
    char username[20], password[20];

    printf("Enter your name: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < 3; i++) {
        if (strcmp(username, staff[i]) == 0 && strcmp(password, passwords[i]) == 0) {
            printf("Welcome, %s!\n", username);
            return 1;
        }
    }
    printf("Unauthorized access!\n");
    return 0;
}
