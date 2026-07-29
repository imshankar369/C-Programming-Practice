#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);

    printf("Prefixes:\n");

    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++)
            printf("%c", str[j]);
        printf("\n");
    }

    return 0;
}
