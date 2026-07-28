#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int len, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    end = len - 1;

    printf("Reversed word order: ");

    while (end >= 0) {
        while (end >= 0 && str[end] == ' ')
            end--;

        if (end < 0)
            break;

        int start = end;

        while (start >= 0 && str[start] != ' ')
            start--;

        for (int i = start + 1; i <= end; i++)
            printf("%c", str[i]);

        printf(" ");

        end = start - 1;
    }

    return 0;
}
