#include <stdio.h>

int main() {

    char *names[] = {
        "Shankar",
        "C Programming",
        "Pointer"
    };

    for(int i = 0; i < 3; i++)
        printf("%s\n", names[i]);

    return 0;
}
