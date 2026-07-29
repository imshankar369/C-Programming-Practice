#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (strlen(password) < 8) {
        printf("Weak Password");
        return 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {

        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    if (upper && lower && digit && special)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}
