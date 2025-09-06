#include<stdio.h>
int main()
{
    int n=89,n2=89,p=1,r,digit_count=0,i,s=0,cp;
    cp=n;
    while(n!=0)
    {
        r=n%10;
        digit_count++;
        p=1;
        n=n/10;

    }
    while(n2!=0)
    {
        r=n2%10;
        for(i=1;i<=digit_count;i++)
        {
            p=p*r;
        }
        s=s+p;
        p=1;
        digit_count--;
        n2=n2/10;
    }
    if(cp==s)
    {
        printf("it is a disarium number ");
    }
    else
    {
        printf("it is not a disarium number ");
    }
    return 0;
}