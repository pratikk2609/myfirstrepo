#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char *name;
    char *gender;
    int age;
};

int main()
{
    int i = 0, n = 13;

    struct Person person[15];
    struct Person person1;

    // person1.age= 10;
    // person1.name = "Pravin";

    person[0].name = "Dnyandeo Pawar";
    person[0].gender = "Male";
    person[0].age = 77;

    person[1].name = "Vijay Pawar";
    person[1].gender = "Male";
    person[1].age = 49;

    person[2].name = "Pramod Pawar";
    person[2].gender = "Male";
    person[2].age = 47;

    person[3].name = "Pradeep Pawar";
    person[3].gender = "Male";
    person[3].age = 45;

    person[4].name = "Pravin Pawar";
    person[4].gender = "Male";
    person[4].age = 41;

    person[5].name = "Manisha Pawar";
    person[5].gender = "Female";
    person[5].age = 48;

    person[6].name = "Pushpa Pawar";
    person[6].gender = "Female";
    person[6].age = 43;

    person[7].name = "Surekha Pawar";
    person[7].gender = "Female";
    person[7].age = 39;

    person[8].name = "Sarika Pawar";
    person[8].gender = "Female";
    person[8].age = 38;

    person[9].name = "Pratiksha Pawar";
    person[9].gender = "Female";
    person[9].age = 19;

    person[10].name = "Pratima Pawar";
    person[10].gender = "Female";
    person[10].age = 19;

    person[11].name = "Pratik Pawar";
    person[11].gender = "Male";
    person[11].age = 18;

    person[12].name = "Pratibha Pawar";
    person[12].gender = "Female";
    person[12].age = 13;

    for (i = 0; i < n; i++)
    {
        printf("name = %s\t", person[i].name);
        printf("gender = %s\t", person[i].gender);
        printf("age = %d\t", person[i].age);
        printf("\n");
    }

    printf("ALL MALES IN FAMILY:\n");
    for (i = 0; i < n; i++)
    {
        if (person[i].gender == "Male")
        {
            printf("%s\t", person[i].name);
            printf("%d\t", person[i].age);
            printf("\n");
        }
    }

    printf("\nALL FEMALES IN FAMILY:\n");
    for (i = 0; i < n; i++)
    {
        if (person[i].gender == "Female")
        {
            printf("%s\t", person[i].name);
            printf("%d\t", person[i].age);
            printf("\n");
        }
    }

    printf("\nAGE ABOVE 50: \n");
    for (i = 0; i < n; i++)
    {
        if (person[i].age >= 50)
        {
            printf("%s\t", person[i].name);
            printf("\n");
        }
    }

    printf("\nAGE ABOVE 30 AND BELOW 50: \n");
    for (i = 0; i < n; i++)
    {
        if (person[i].age >= 30 && person[i].age <= 50)
        {
            printf("%s\t", person[i].name);
            printf("\n");
        }
    }

    printf("\nAGE BELOW 30: \n");
    for (i = 0; i < n; i++)
    {
        if (person[i].age <= 30)
        {
            printf("%s\t", person[i].name);
            printf("\n");
        }
    }

    printf("\nAGE BELOW 30 AND ARE FEMALES: \n");
    for (i = 0; i < n; i++)
    {
        if (person[i].age <= 30 && person[i].gender == "Female")
        {
            printf("%s\t", person[i].name);
            printf("\n");
        }
    }

    printf("\nAGE ABOVE 30 AND ARE MALES: \n");
    for (i = 0; i < n; i++)
    {
        if (person[i].age >= 30 && person[i].gender == "Male")
        {
            printf("%s\t", person[i].name);
            printf("\n");
        }
    }
    
    return 0;
}