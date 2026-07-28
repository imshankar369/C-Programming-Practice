#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int start = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int k = 0;

            for (int j = i - 1; j >= start; j--)
                temp[k++] = str[j];

            temp[k] = '\0';

            printf("%s", temp);

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
