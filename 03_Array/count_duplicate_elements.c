#include <stdio.h>

int main() {
    int arr[100], n, duplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                duplicate++;
                break;
            }
        }
    }

    printf("Duplicate Elements = %d", duplicate);

    return 0;
}
