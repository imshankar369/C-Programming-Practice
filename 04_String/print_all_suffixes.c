#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);

    printf("Suffixes:\n");

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++)
            printf("%c", str[j]);
        printf("\n");
    }

    return 0;
}
