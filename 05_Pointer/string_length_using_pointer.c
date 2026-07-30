#include <stdio.h>

int main() {

    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while(*ptr != '\0') {

        if(*ptr == '\n')
            break;

        length++;
        ptr++;
    }

    printf("Length = %d", length);

    return 0;
}
