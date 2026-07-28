#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], shortest[100];
    int i = 0, j = 0, min = 1000, first = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';

            if (j > 0 && (first || j < min)) {
                min = j;
                strcpy(shortest, word);
                first = 0;
            }

            j = 0;

            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("Shortest word: %s", shortest);

    return 0;
}
