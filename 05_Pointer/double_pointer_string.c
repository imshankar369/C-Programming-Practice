#include <stdio.h>

int main() {

    char *str = "Hello Pointer";

    char **ptr = &str;

    printf("String = %s\n", *ptr);

    return 0;
}
