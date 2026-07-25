#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n, same = 1;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter second array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    for(int i = 0; i < n; i++) {
        if(arr1[i] != arr2[i]) {
            same = 0;
            break;
        }
    }

    if(same)
        printf("Arrays are Equal");
    else
        printf("Arrays are Not Equal");

    return 0;
}
