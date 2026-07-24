#include <stdio.h>

int main() {
    int n, i;
    int isPerfectCube = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i * i <= n; i++) {
        if (i * i * i == n) {
            isPerfectCube = 1;
            break;
        }
    }

    if (isPerfectCube)
        printf("Perfect Cube");
    else
       printf("Not a Perfect Cube");

    return 0;
}
