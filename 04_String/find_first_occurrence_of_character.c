#include <stdio.h>

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            printf("First occurrence at index %d", i);
            return 0;
        }
    }

    printf("Character not found.");

    return 0;
}
