#include <stdio.h>
int main()
{
    char name[] = "Pratik";
    int i = 0;
    while (i <= 5)
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    printf("\n");

    return 0;
}
