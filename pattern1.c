#include<stdio.h>
int main()
{
    int i=10,j=10,n=18;
    for(i=10;i<=18;i=i+2)
    {
        for(j=10;j<=i;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}