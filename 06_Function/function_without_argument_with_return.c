#include <stdio.h>

int getNumber() {
    return 100;
}

int main() {

    int num = getNumber();

    printf("Number = %d", num);

    return 0;
}
