#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks
}s3={3};
struct student s1={1, "Pratik", 80.1};
    struct student s2;

void main()
{
    struct student s1={1, "Pratik", 80.1};
    struct student s2;
    // struct student s2={2, "Parth", 90.2};
    printf("enter info for s2");
    scanf("%d %s %f", &s2.rollno, s2.name, &s2.marks);

    printf("info for s1");
    printf("\n %d %s %f", s1.rollno, s1.name, s1.marks);

    printf("\ninfo for s2");
    printf("\n %d %s %f", s2.rollno, s2.name, s2.marks);

    printf("\ninfo for s3");
    printf("\n %d %s %f", s3.rollno, s3.name, s3.marks);


}