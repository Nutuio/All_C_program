#include<stdio.h>
int main()
{
    float a,b,c,p;
    printf("Enter a first number : ");
    scanf("%f", & a);
    printf("Enter a second number : ");
    scanf("%f", & b);
    printf("Enter a third number : ");
    scanf("%f", & c);
    p=a*b*c;
    printf("The product is %f", p);
}