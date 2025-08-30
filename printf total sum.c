#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    printf("Enter a first number  : ");
    scanf("%d", & a);
    printf("Enter a second number : ");
    scanf("%d", & b);
    printf("Enter a third number :  ");
    scanf("%d", & c);
    printf("Enter a fourth number : ");
    scanf("%d", & d);
    s=a+b+c+d;
    printf("the sum is %d", s);
    return 0;
}