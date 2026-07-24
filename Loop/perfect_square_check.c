#include <stdio.h>

int main() {
    int n, i;
    int isPerfectSquare = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++) {
        if (i * i == n) {
            isPerfectSquare = 1;
            break;
        }
    }

    if (isPerfectSquare)
        printf("Perfect Square");
    else
        printf("Not a Perfect Square");

    return 0;
}
