#include <stdio.h>
void bin_coeff(int val) 
{
    
   for (int i = 0; i <= val; i++) 
   {
        int num = 1;
        for (int j = 0; j <= i; j++) 
        {
            if (i != 0 && j != 0)
                num = num * (i - j + 1) / j;
            printf("%4d", num);
        }
        printf("\n");
   }
}
int main() {
   int val;
   scanf("%d",&val);
   bin_coeff(val);
   return 0;
}