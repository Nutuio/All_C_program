#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter a number : ");
    scanf("%d", & a);
    printf("Enter a anther number : ");
    scanf("%d", & b);
    r=a%b;
    printf("the reminder is %d", r);
}