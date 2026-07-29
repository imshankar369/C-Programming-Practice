#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][100];

    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        scanf("%99s", str[i]);
    }

    char largest[100];
    strcpy(largest, str[0]);

    for (int i = 1; i < n; i++) {
        if (strcmp(str[i], largest) > 0)
            strcpy(largest, str[i]);
    }

    printf("Lexicographically Largest: %s", largest);

    return 0;
}
