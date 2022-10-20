#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Bamboozled";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");
    printf("string is %s\n length is %d\n", arr, len1);
    printf("string is %s\n length is %d\n", "Humpty Dumpty", len2);

    return 0;
}
