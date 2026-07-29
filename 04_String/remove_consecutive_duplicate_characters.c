#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Result: ");

    printf("%c", str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != str[i - 1])
            printf("%c", str[i]);
    }

    return 0;
}
