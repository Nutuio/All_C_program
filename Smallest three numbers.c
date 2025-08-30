#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a first number : ");
    scanf("%d", & a);
    printf("Enter a second number :");
    scanf("%d", & b);
    printf("Enter a third number  :");
    scanf("%d", & c);
    if(a<b)
    {
        if(a<c)
        {
            printf("a is smallest ");
        }
        else
        {
            printf("c is smallest ");
        }
    }
    else
    {
        if(b<c)
        {
            printf("b is smallest ");
        }
        else
        {
            printf("c is smallest ");
        }
    }
    return 0;
}