#include <stdio.h>

int minimum(int a, int b) {

    if (a < b)
        return a;
    else
        return b;
}

int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Minimum = %d", minimum(a, b));

    return 0;
}
