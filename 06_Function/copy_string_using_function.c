#include <stdio.h>

void copyString(char source[], char destination[]) {

    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main() {

    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    copyString(source, destination);

    printf("Copied String: %s", destination);

    return 0;
}
