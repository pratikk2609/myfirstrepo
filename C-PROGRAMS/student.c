#include <stdio.h>

struct details
{
    char name[30];
    char sec[30];
    float per;
};

void print_struct(struct details str_arr[]);

int main()
{
    struct details student[3] = {
        {"Pratik", "A", 88.6},
        {"Rahul", "B", 62.4},
        {"Nandan", "C", 98.5},
    };
    print_struct(student);
    return 0;
}

void print_struct(struct details str_arr[])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Name: %s\n", str_arr[i].name);
        printf("Section: %s\n", str_arr[i].sec);
        printf("Percentage: %.2f\n", str_arr[i].per);
        printf("\n");
    }
}