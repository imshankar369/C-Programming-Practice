#include <stdio.h>

struct Student {
    int id;
    float cgpa;
};

struct Student inputStudent() {

    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    return s;
}

int main() {

    struct Student s = inputStudent();

    printf("\nStudent Information\n");
    printf("ID = %d\n", s.id);
    printf("CGPA = %.2f\n", s.cgpa);

    return 0;
}
