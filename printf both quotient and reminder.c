#include<stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter first number : " );
    scanf("%d", & a);
    printf("Enter a second number : ");
    scanf("%d", & b);
    q=b/a;
    r=b%a;
    printf("the quotient is %d \n",q);
    printf("the reminder is %d \n",r);
    return 0;
}