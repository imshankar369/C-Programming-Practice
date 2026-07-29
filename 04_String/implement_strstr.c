#include <stdio.h>

char *myStrstr(char str[], char sub[]) {
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
            j++;

        if (sub[j] == '\0')
            return &str[i];
    }

    return NULL;
}

int main() {
    char str[100], sub[100];

    printf("Enter main string: ");
    scanf("%99s", str);

    printf("Enter substring: ");
    scanf("%99s", sub);

    char *ptr = myStrstr(str, sub);

    if (ptr)
        printf("Substring found at index %ld", ptr - str);
    else
        printf("Substring not found");

    return 0;
}
