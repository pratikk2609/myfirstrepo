#include <stdio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[10];
};

int main()
{
    int i;
    struct student st[3];
    printf("enter record of 3 students:");
    for (i = 0; i < 3; i++)
    {
        printf("\nenter rollno:");
        scanf("%d", &st[i].rollno);
        printf("enter name:");
        scanf("%s", &st[i].name);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n is %d, name is %s", st[i].rollno, st[i].name);
    }

    return 0;
}
