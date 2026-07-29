#include <stdio.h>
#include <string.h>

void combination(char str[], char data[], int start, int end, int index, int r) {
    if (index == r) {
        data[index] = '\0';
        printf("%s\n", data);
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
        data[index] = str[i];
        combination(str, data, i + 1, end, index + 1, r);
    }
}

int main() {
    char str[100], data[100];
    int r;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter combination length: ");
    scanf("%d", &r);

    combination(str, data, 0, strlen(str) - 1, 0, r);

    return 0;
}
