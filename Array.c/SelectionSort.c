#include<stdio.h>
int main()
{
    int a[5]={5,3,1,2,0};
    int i,j,min,t;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("the sorted array is :");
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}