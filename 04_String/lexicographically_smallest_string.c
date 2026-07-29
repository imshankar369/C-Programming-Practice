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

    char smallest[100];
    strcpy(smallest, str[0]);

    for (int i = 1; i < n; i++) {
        if (strcmp(str[i], smallest) < 0)
            strcpy(smallest, str[i]);
    }

    printf("Lexicographically Smallest: %s", smallest);

    return 0;
}
