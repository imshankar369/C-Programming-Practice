#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[100][50];
    int n = 0, count[100] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");

    while (token != NULL) {

        int found = -1;

        for (int i = 0; i < n; i++) {
            if (strcmp(words[i], token) == 0) {
                found = i;
                break;
            }
        }

        if (found == -1) {
            strcpy(words[n], token);
            count[n]++;
            n++;
        } else {
            count[found]++;
            if (count[found] == 2) {
                printf("First repeated word: %s", token);
                return 0;
            }
        }

        token = strtok(NULL, " \n");
    }

    printf("No repeated word found.");

    return 0;
}
