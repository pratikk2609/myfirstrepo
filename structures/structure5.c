#include<stdio.h>

typedef struct student
{
    int rollno;
    char name[10];
    float marks;

}student;

void main()
{
    student s={1,"\npratik", 85};
    printf("%d%s%f", s.rollno, s.name, s.marks);
}
