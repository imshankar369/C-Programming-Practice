#include <stdio.h>

void reverse(char str[]) {

    int length = 0;

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

}

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed String: ");
    reverse(str);

    return 0;
}
