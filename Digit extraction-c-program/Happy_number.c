#include<stdio.h>
int main()
{
    int n=86,r,s=0,cp;
    cp=n;
    while(n>9)
    {
        while(n!=0)
        {
            r=n%10;
            s=s+(r*r);
            n=n/10;
        }
         n=s;s=0;    
    }
    if(n==1)
    {
        printf("happy number ");
    }
    else
    {
        printf("not happy number ");
    }
    return 0;
}