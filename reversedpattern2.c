#include<stdio.h>
int main()
{
    int i=5,j=1,x=1;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", x);
            x++;
        }
        printf("\n");
    }
}