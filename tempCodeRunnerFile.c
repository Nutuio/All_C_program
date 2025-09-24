#include<stdio.h>
int main()
{
    int a[5]={5,3,1,2,0};
    int i,j,t,min,m;
    for(i=0;i<5;i++)
    {
        min=i;
        for(j=i+1;j<5;j++)
        {
           if(m[j]<m[min])
           {
             min=j;
           }
        }
        t=m[i];
        m[i]=m[min];
        m[min]=t;
    }
    return 0;
}