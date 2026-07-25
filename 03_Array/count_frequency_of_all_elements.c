#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(int i = 0; i < n; i++) {
        int count = 1;

        if(freq[i] == 0)
            continue;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;
            }
        }

        freq[i] = count;
    }

    printf("\nElement\tFrequency\n");

    for(int i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%d\t%d\n", arr[i], freq[i]);
    }

    return 0;
}
