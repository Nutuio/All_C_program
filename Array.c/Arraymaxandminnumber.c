#include<stdio.h>
int main()
{
    int a[9]={3,6,2,21,11,19,1,100,121};
    int i,max=a[0],min=a[0];
    for(i=0;i<9;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("the max is : %d min is : %d", max,min);
    return 0;
}