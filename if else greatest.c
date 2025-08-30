#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a first number :");
    scanf("%d", & a);
    printf("Enter a second number :");
    scanf("%d",& b);
    printf("Enter a third number :");
    scanf("%d", & c);
    printf("Enter a fourth number :");
    scanf("%d", & d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("a is greatest ");
            }
            else
            {
                printf("d is greatest ");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is greatest ");
            }
            else
            {
                printf("d is greatest ");
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("b is greatest ");
            }
            else
            {
                printf("d is greatest ");
            }
        }
        else
        {
            if(c>d)
            {
                printf("c is greatest ");
            }
            else
            {
                printf("d is greatest ");
            }
        }
    }
    return 0;
}