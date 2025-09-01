#include<stdio.h>
int main()
{
    int i=1,j=1,f=1,x=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(x=1;x<=j;x++)
            {
                f=f*x;
                f=1;
            }
            printf("%d",x);
        }
        printf("\n");
    }
}