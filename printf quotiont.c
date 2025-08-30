#include<stdio.h>
int main()
{
    float a,b,q;
    printf("Enter a number : ");
    scanf("%f", & a);
    printf("Enter a anther number : ");
    scanf("%0.2f",& b);
    q=b/a;
    printf("the qutiont is %f", q);
}