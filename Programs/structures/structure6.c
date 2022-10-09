#include<stdio.h>

struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    struct myStructure s1;
  
    s1.myNum=12;
    s1.myLetter='P';

    printf("My Number is %d\n", s1.myNum);
    printf("My Letter is %c\n", s1.myLetter);
    
}
