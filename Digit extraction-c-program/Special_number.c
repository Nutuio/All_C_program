#include<stdio.h>
int main()
{
    int n=1792,r,s=0,cp;
    cp=n;
    while(n>0)
    {
        while(n!=0)
        {
            r=n%10;
            s=s+r;
            n=n/10;
        }
        n=s;
    }
    if(cp==s)
    {
        printf("it is a special number ");
    }
    else
    {
        printf("it is not a special number ");
    }
    return 0;
}