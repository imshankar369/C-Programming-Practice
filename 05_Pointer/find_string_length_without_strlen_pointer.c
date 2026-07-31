#include <stdio.h>

int stringLength(char *ptr) {

    int count = 0;

    while(*ptr != '\0') {

        if(*ptr != '\n')
            count++;

        ptr++;
    }

    return count;
}

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %d", stringLength(str));

    return 0;
}
