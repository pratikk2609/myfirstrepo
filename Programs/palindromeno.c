#include<stdio.h> //palindrome is a no which is same if we read from start or end
#include<conio.h>

void main()
{
    int a, b, c, s = 0;
    printf("Enter a number:\t");
    scanf("%d", &a);
    c = a;

   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }

   if(s == c)
   {
      printf("This number %d is a palindrome", c);
   }
   else
   {
      printf("This number %d is not a palindrome", c);
   }
}