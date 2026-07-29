#include <stdio.h>

int myStrlen(char str[]) {
    int len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = myStrlen(str);

    if (str[len - 1] == '\n')
        len--;

    printf("Length = %d", len);

    return 0;
}
