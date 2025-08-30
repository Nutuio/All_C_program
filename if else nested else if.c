#include<stdio.h>
int main()
{
    int no,limit=40,halflimit=40/2,doublelimit=40*2;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no<limit)
    {
        printf("the number is less than 40");
        if(no<halflimit)
        {
            printf("the number is less than 20 ");
        }
        else if(no==halflimit)
        {
            printf("the number is equal to 20 ");
        }
        else
        {
            printf("the number is greater than 20 ");
        }
    }
    else if(no==limit)
    {
        printf("the number is equal to 40");
    }
    else
    {
        if(no>doublelimit)
        {
            printf("the number is greater than 80");
        }
        else if(no==doublelimit)
        {
            printf("the number is equal to 80 ");
        }
        else
        {
            printf("the number is less than 80 ");
        }
    }
    
}