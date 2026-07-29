#include <stdio.h>

void myStrcpy(char dest[], char src[]) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    myStrcpy(destination, source);

    printf("Copied String: %s", destination);

    return 0;
}
