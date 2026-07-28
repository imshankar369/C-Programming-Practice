#include <stdio.h>

int main() {
    char str[500];
    int count = 0;

    printf("Enter a paragraph: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            count++;
    }

    printf("Number of sentences = %d", count);

    return 0;
}
