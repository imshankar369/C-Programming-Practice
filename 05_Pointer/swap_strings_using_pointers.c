#include <stdio.h>

int main() {

    char *str1 = "Apple";
    char *str2 = "Orange";

    char *temp;

    printf("Before Swap:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    temp = str1;
    str1 = str2;
    str2 = temp;

    printf("\nAfter Swap:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}
