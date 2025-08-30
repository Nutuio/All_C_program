#include<stdio.h>
int main()
{
    int no,limit=100,halflimit=100/2,doublelimit=100*2;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no<limit)
    {
        printf("a number is less than 100 \n");
        if(no>halflimit)
        {
            printf("a number is greater than 50 \n ");
        }
        else
        {
            printf("a number is less than or equal to 50 \n ");
        }
    }
    if(no>doublelimit)
    {
        printf("a number is greater than 200 \n");
    }
    else
    {
        printf("a number is less than or equal to 200 \n");
    }
    return 0;
}