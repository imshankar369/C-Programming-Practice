#include <stdio.h>

int main() {
    char str[100], ch;
    int index = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            index = i;
    }

    if (index != -1)
        printf("Last occurrence at index %d", index);
    else
        printf("Character not found.");

    return 0;
}
