#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Tokens:\n");

    int i = 0;

    while (str[i] != '\0') {

        while (str[i] == ' ')
            i++;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            printf("%c", str[i]);
            i++;
        }

        if (str[i] != '\0')
            printf("\n");
    }

    return 0;
}
