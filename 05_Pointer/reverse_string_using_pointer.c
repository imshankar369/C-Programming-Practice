#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char *start, *end;
    char temp;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if(str[len-1] == '\n')
        str[len-1] = '\0';

    start = str;
    end = str + strlen(str) - 1;

    while(start < end) {

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reverse = %s", str);

    return 0;
}
