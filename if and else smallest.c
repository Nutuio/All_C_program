#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter a first number : ");
    scanf("%d", & a);
    printf("Enter a second number :");
    scanf("%d", & b);
    printf("Enter a third number :");
    scanf("%d", & c);
    printf("Enter a fourth number :");
    scanf("%d", & d);
    if(a<b)
    {
        if(a<c)
        {
            if(a<d)
            {
                printf("a is smallest ");
            }
            else
            {
                printf("d is smallest ");
            }
        }
        else
        {
            if(c<d)
            {
                printf("c is smallest ");
            }
            else
            {
                printf("d is smallest ");
            }
        }
    }
    else
    {
        if(b<c)
        {
            if(b<d)
            {
                printf("b is smallest ");
            }
            else
            {
                printf("d is smallest ");
            }
        }
        else
        {
            if(c<d)
            {
                printf("c is smallest ");
            }
            else
            {
                printf("d is smallest ");
            }
        }
    }
    return 0;
}   
