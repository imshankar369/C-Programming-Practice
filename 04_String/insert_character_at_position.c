#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int pos, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Enter character to insert: ");
    scanf(" %c", &ch);

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > len) {
        printf("Invalid position.");
        return 0;
    }

    for (int i = len; i >= pos; i--)
        str[i + 1] = str[i];

    str[pos] = ch;

    printf("Modified string: %s", str);

    return 0;
}
