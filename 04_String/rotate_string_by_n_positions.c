#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int n, len;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter rotation amount: ");
    scanf("%d", &n);

    len = strlen(str);
    n %= len;

    for (int i = 0; i < len; i++)
        temp[i] = str[(i + n) % len];

    temp[len] = '\0';

    printf("After Rotation: %s", temp);

    return 0;
}
