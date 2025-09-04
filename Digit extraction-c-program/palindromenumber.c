#include<stdio.h>
int main()
{
    int r,s=0,n,num=n;
    while(n!=0)
    {
       r=n%10;
       s=s*10+r;
       n=n/10;
    }
    if(num==s)
    {
        printf("it is palimdrome number ");
    }
    else
    {
        printf("it is not a palimdrome number ");
    }
    return 0;
}