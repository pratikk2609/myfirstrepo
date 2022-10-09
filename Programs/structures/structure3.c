#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks
};

void main()
{
    struct student s1={1, "Pratik", 80.1};
    struct student *ptr=&s1;


    printf("info for s1");
    printf("\n %d %s %f", ptr->rollno, ptr->name, ptr->marks);

}