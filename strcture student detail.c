#include <stdio.h>

struct student {
    char name[20];
    int rollno;
    float age;
};

int main() {
    struct student s1;
    printf("Enter student information:\n");
    
    printf("Enter name, roll number, and age:\n");
    scanf("%s %d %f", s1.name, &s1.rollno, &s1.age);

    printf("Student Information:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.rollno);
    printf("Age: %.2f\n", s1.age);

    return 0;
}
