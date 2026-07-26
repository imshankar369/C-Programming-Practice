#include <stdio.h>

int main() {
    int arr[100], pos[100], neg[100];
    int n, p = 0, ne = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[ne++] = arr[i];
    }

    printf("Rearranged Array:\n");

    int i = 0, j = 0;

    while (i < p || j < ne) {
        if (i < p)
            printf("%d ", pos[i++]);

        if (j < ne)
            printf("%d ", neg[j++]);
    }

    return 0;
}
