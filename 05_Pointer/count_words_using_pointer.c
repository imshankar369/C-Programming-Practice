#include <stdio.h>

int main() {

    char str[200];
    char *ptr;
    int count = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    while(*ptr != '\0') {

        if((*ptr != ' ' && *ptr != '\n') &&
           (ptr == str || *(ptr-1) == ' '))
            count++;

        ptr++;
    }

    printf("Words = %d", count);

    return 0;
}
