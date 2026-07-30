#include <stdio.h>

struct Student {
    int id;
    float cgpa;
};

int main() {

    struct Student s = {101, 4.00};
    struct Student *ptr;

    ptr = &s;

    printf("ID = %d\n", ptr->id);
    printf("CGPA = %.2f", ptr->cgpa);

    return 0;
}
