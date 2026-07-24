#include <stdio.h>

int main() {

    printf("ASCII Values (0-127):\n");

    for (int i = 0; i <= 127; i++) {
        printf("%3d = %c\n", i, i);
    }

    return 0;
}
