#include <stdio.h>

struct person
{
    int age;
    float weight;
    double salary;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;

    printf("enter age: ");
    scanf("%d", &personPtr->age);


    printf("enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("enter salary: ");
    scanf("%f", &personPtr->salary);


    
    printf("Age=%d\n", personPtr->age);
    printf("Weight=%f\n", personPtr->weight);


    printf("%d\n", &person1);
    printf("%d\n", &person1.age);
    printf("%d\n", &person1.weight);
    printf("%d\n", &person1.salary);

    printf("%d\n", &personPtr);
    printf("%d\n", &personPtr->age);
    printf("%d\n", &personPtr->weight);
    printf("%d\n", &personPtr->salary);

    printf("%d\n", &(*personPtr));
    printf("%d\n", &(*personPtr).age);
    printf("%d\n", &(*personPtr).weight);
    printf("%d", &(*personPtr).salary);

}