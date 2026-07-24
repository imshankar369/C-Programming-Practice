#include <stdio.h>

int main() {

    printf("Alphabets with ASCII Values:\n");

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }

    printf("\n");

    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }

    return 0;
}
