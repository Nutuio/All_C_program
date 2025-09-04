#include<stdio.h>
int main()
{
    int i,j,x=9;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x=x+9;
        }
        printf("\n");
    }
}
