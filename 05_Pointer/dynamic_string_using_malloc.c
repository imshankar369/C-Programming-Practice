#include <stdio.h>
#include <stdlib.h>

int main() {

    char *str;

    str = (char *)malloc(100 * sizeof(char));

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    printf("You entered: %s", str);

    free(str);

    return 0;
}
