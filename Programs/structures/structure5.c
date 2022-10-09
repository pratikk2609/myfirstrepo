#include <stdio.h>

typedef struct student // typdef-> it is used to create additional name(alias) for another data type.
{
    int rollno;
    char name[10];
    float marks;

} student;

void main()
{
    student s = {1, "pratik", 85};
    printf("%d%s%f", s.rollno, s.name, s.marks);
}
