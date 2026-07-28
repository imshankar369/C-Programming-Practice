#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], largest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(largest, word);
            }

            j = 0;

            if (str[i] == '\0')
                break;
        } else {
            word[j++] = str[i];
        }

        i++;
    }

    printf("Largest word: %s", largest);

    return 0;
}
