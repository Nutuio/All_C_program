#include<stdio.h>
int main()
{
    int n=12509,cp,r,duck=0;
    cp=n;
    while(n>0)
    {
        r=n%10;
        if(r==0)
        {
            duck=1;
            break;
        }
        n=n/10;
    }
    if(duck)
    {
        printf("it is a duck number ");
    }
    else
    {
        printf("it is not a duck number ");
    }
    return 0;
}