#include<stdio.h>
int main()
{
    int a=10,b=15,c=19;
    printf("Enter a first number :");
    scanf("%d", & a);
    printf("Enter a second number : ");
    scanf("%d",& b);
    printf("Enter a third number : ");
    scanf("%d", & c);
    if(a>b)
    {
        printf("a is not greatest ");
    }
    else
    {
        if(b>c)
        {
            printf("b is not greatest ");
        }
        else
        {
            if(a>c)
            {
                printf("a not is greatest ");
            }
            else
            {
                printf("c is greatest ");
            }
        }
    }
    return 0;
} 
   