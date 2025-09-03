#include<stdio.h>
int main()
{
    int i=1,j=1,x=1,s=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(x=1;x<=j;x++)
            {
                s=s+x;
            }
            printf("%d",s);
            s=0;
        }
        printf("\n");
    }
}