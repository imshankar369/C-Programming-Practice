#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= len) {
        printf("Invalid position.");
        return 0;
    }

    for (int i = pos; i < len; i++)
        str[i] = str[i + 1];

    printf("Modified string: %s", str);

    return 0;
}
