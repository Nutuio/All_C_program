#include<stdio.h>
int main()
{
    int a[9]={3,6,2,21,11,19,1,100,121};
    int index=0,i;
    for(i=0;i<9;i++)
    {
        if(1==a[i])
        {
            index=i;
            break;
        }
    }
    printf("the linear search is : %d",index=i);
}