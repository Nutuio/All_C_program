#include<stdio.h>
int main()
{
    int a[5]={10,1,5,4,3};
    int i,j,t;
    for(i=0;i<5;i++)
    {
        for(j=(i+1);j<5;j++)
        {
            if(a[i]>a[j])
            {
                // swap
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
    printf("the sorted array is :");
    for(i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}