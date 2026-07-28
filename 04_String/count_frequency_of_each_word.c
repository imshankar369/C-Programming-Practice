#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[100][50];
    int count[100] = {0};
    int n = 0;

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
        }

        token = strtok(NULL, " \n");
    }

    printf("Word Frequencies:\n");

    for (int i = 0; i < n; i++)
        printf("%s = %d\n", words[i], count[i]);

    return 0;
}
