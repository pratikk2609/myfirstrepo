#include <stdio.h>
#include <string.h>

struct strike
{
    int strikenum;
    float CEValue;
    float PEValue;
};

int main()
{
    int i;
    int fromstrike;
    int tostrike;
    int ATMstrike;
    struct strike st[20];
    printf("\nenter from strike:");
    scanf("%d", &fromstrike);
    printf("\nenter to strike:");
    scanf("%d", &tostrike);
    for (i = 0; i < ((tostrike - fromstrike) / 100) + 1; i++)
    {
        st[i].strikenum = fromstrike + (i * 100);
        printf("\nenter CE value of %d:", st[i].strikenum);
        scanf("%f", &st[i].CEValue);
        printf("\nenter PE value of %d:", st[i].strikenum);
        scanf("%f", &st[i].PEValue);
    }
    printf("what is the ATM strike:");
    scanf("%d", &ATMstrike);
    for (i = 0; i < ((tostrike - fromstrike) / 100) + 1; i++)
    { 
        if(ATMstrike==st[i].strikenum)
        {
            printf("\n %f\t %d\t  %f", st[i].CEValue, st[i].strikenum, st[i].PEValue);
        }
        else if (ATMstrike<st[i].strikenum)
        {
            printf("\n \t\t %d\t  %f", st[i].strikenum, st[i].PEValue);
        }
        else
        {
             printf("\n %f\t %d\t \t", st[i].CEValue, st[i].strikenum);
        }
    }

    return 0;
}