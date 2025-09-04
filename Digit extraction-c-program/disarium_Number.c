#include<stdio.h>
int main()
{
    int n=159,cp,r,s=0;
    cp=n;
    printf("Enter a number ");
    scanf("%d", & n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
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