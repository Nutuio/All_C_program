#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,p,q,A,m,r,s;
    printf("Enter a first number :  ");
    scanf("%lf", & a);
    printf("Enterv a second number : ");
    scanf("%lf", & b);
    p=a*b;
    q=a/b;
    A=a+b;
    r=a%b;
    m=a-b;
    s=p+q+A+m;
    printf("the sum is %f", s);
    return 0;
}