#include <stdio.h>
int main()
{
    char name[30];
    printf("enter name:");
    fgets(name, sizeof(name), stdin); // read string // stdin=standard input.
    printf("name:");
    puts(name); // display string
    return 0;
}