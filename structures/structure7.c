#include <stdio.h>
#include<string.h>
struct myStructure
{
    int myNum;
    char myName;
    char myString[30]; // string
};

int main()
{
    struct myStructure s1;

    strcpy(s1.myString, "text");
    printf("my String is %s", s1.myString);
    return 0;
}