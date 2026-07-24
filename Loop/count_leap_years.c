#include <stdio.h>

int main() {
    int startYear, endYear, count = 0;

    printf("Enter start year: ");
    scanf("%d", &startYear);

    printf("Enter end year: ");
    scanf("%d", &endYear);

    for (int year = startYear; year <= endYear; year++) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            count++;
        }
    }

    printf("Total Leap Years = %d\n", count);

    return 0;
}
