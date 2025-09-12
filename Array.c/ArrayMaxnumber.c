#include<stdio.h>
int main()
{
    int a[6]={10,12,14,17,19,25};
    int max=0,i;
    for(i=0;i<6;i++)
    {
       if(a[i]>max)
       {
        max=a[i];
       }
    }
    printf("the max value is : %d",max);
    return 0;
}