#include<stdio.h>
int main()
{
    int a[9]={3,6,2,21,11,19,1,100,121};
    int i,max_i=a[0],min_i=a[0];
    for(i=0;i<9;i++)
    {
      if(max_i<a[i])
      {
        max_i=i;
      }
      if(min_i>a[i])
      {
        min_i=i;
      }
    }
    printf("the max_i is : %d min_i is : %d",max_i,min_i);
    return 0;
}