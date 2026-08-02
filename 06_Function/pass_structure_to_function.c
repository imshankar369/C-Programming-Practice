#include <stdio.h>

struct Student {
    int id;
    float cgpa;
};

void display(struct Student s) {
    printf("ID = %d\n", s.id);
    printf("CGPA = %.2f\n", s.cgpa);
}

int main() {

    struct Student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    display(s);

    return 0;
}
