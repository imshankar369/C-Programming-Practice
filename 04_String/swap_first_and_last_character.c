#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("Modified string: %s", str);

    return 0;
}
