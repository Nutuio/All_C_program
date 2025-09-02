#include<stdio.h>
int main()
{
    int i=50,j=10,n=10;
    for(i=50;i>=10;i=i-10)
    {
        for(j=10;j<=i;j=j+10)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}