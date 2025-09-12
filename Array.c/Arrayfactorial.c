#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,f=1;
    for(i=0;i<5;i++)
    {
        f=f*a[i];
    }
    printf("%d",f);
    return 0;
}