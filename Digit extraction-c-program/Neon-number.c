#include<stdio.h>
int main()
{
    int r,n=9,sq,s=0;
    sq=n*n;
    while(sq!=0)
    {
       r=sq%10;
       s=s+r;
       sq=sq/10;
    }
    if(n==s)
    {
        printf("it is neon number ");
    }
    else
    {
        printf("it is not a neon number ");
    }
    return 0;
}