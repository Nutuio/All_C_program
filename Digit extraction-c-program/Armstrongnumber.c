#include<stdio.h>
int main()
{
    int r,s=0,n,num;
    num=n;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(num==s)
    {
        printf("the number is armstrong number ");
    }
    else
    {
        printf("the number is not armstrong mumber ");
    }
    return 0;
}