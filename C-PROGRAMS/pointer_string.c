//using pointers to access the array elements.
//strings

#include <stdio.h>
int main()
{
    char name[] = "Pratik";
    char *ptr;
    ptr = name;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    return 0;
}
