#include <stdio.h>

int main() {

    int arr[100], n, temp;
    int *ptr;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for(int i = 0; i < n-1; i++) {

        for(int j = i+1; j < n; j++) {

            if(*(ptr+i) > *(ptr+j)) {

                temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", *(ptr+i));

    return 0;
}
