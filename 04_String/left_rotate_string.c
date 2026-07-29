#include <stdio.h>
#include <string.h>

int main() {
    char str[100], first;
    int len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    first = str[0];

    for (int i = 0; i < len - 1; i++)
        str[i] = str[i + 1];

    str[len - 1] = first;

    printf("After Left Rotation: %s", str);

    return 0;
}
