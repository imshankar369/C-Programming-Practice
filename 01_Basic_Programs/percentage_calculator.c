#include <stdio.h>

int main()
{
    float obtainedMarks, totalMarks, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &obtainedMarks);

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    percentage = (obtainedMarks / totalMarks) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
