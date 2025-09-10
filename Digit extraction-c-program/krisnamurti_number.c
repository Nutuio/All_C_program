#include<stdio.h>
int main()
{
    int f=1,r,i,s=0,n=145,cp;
    cp=n;
    while(n!=0)
    {
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
        f=1;
    }
    if(cp==s)
    {
        printf("it is a krisnamurti number ");
    }
    else
    {
        printf("it is not a krisnamurti number ");
    }
    return 0;
}