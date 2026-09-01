#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Alice");
    s1.age = 20;
    s1.gpa = 3.8;

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %f\n", s1.gpa);

    
    struct Student s2 = {"Bob", 22, 3.5};

    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("GPA: %f\n", s2.gpa);

    return 0;
}