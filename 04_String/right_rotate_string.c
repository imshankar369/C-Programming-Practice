#include <stdio.h>
#include <string.h>

int main() {
    char str[100], last;
    int len;

    printf("Enter string: ");
    scanf("%s", str);

    len = strlen(str);

    last = str[len - 1];

    for (int i = len - 1; i > 0; i--)
        str[i] = str[i - 1];

    str[0] = last;

    printf("After Right Rotation: %s", str);

    return 0;
}
