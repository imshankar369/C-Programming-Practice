#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];

    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%s", str[i]);
    }

    char prefix[100];
    strcpy(prefix, str[0]);

    for (int i = 1; i < n; i++) {

        while (strncmp(prefix, str[i], strlen(prefix)) != 0) {
            prefix[strlen(prefix) - 1] = '\0';

            if (strlen(prefix) == 0) {
                printf("No common prefix");
                return 0;
            }
        }
    }

    printf("Longest Common Prefix: %s", prefix);

    return 0;
}
