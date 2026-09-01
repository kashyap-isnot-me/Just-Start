#include<stdio.h>
#include<string.h>

struct student {
    char name[200];
    int rollno;
    float cgpa;
};

void info(struct student s1c);

int main(){

    struct student s1 = {"KAshyap", 79 , 9.02};

    info(s1);

    return 0;
}

void info(struct student s1c){

    printf("Student information : \n");
    printf("Student name = %s\n", s1c.name );
    
    struct student *ptr = &s1c;
    printf("Student roll no with ptr= %d\n", (*ptr).rollno );
    printf("Student -> cgpa = %f\n", ptr->cgpa );

}