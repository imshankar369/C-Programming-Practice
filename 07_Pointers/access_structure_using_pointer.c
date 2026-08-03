#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter CGPA: ");
    scanf("%f", &ptr->cgpa);

    printf("\nStudent Information\n");
    printf("ID   : %d\n", ptr->id);
    printf("Name : %s\n", ptr->name);
    printf("CGPA : %.2f\n", ptr->cgpa);

    return 0;
}
