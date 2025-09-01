#include<stdio.h>
int main()
{
    int i=10,j=10,n=50;
    for(i=10;i<=50;i=i+10)
    {
        for(j=10;j<=i;j=j+10)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}