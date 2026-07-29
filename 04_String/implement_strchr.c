#include <stdio.h>

char *myStrchr(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            return &str[i];
    }

    return NULL;
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    char *ptr = myStrchr(str, ch);

    if (ptr != NULL)
        printf("Character found at position %ld", ptr - str);
    else
        printf("Character not found");

    return 0;
}
