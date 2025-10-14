#include<stdio.h>
int main()
{
    int a[9]={2,3,4,5,6,7,8,9,10,11};
    int n=5,a,low,up,mid=0,low_index=0,middle_index=0,upper_index=0,number_search=0,f=0;
    while(low<=up)
    {
       mid=(low+up)/2;
       if(a[mid]<n)
       {
          low=mid+1;
       }
       if(a[mid]>n)
       {
        up=mid-1;
       }
       if(a[mid]==n)
       {
        f=1;
        break;
       }
    }
    if(f==1)
    {
        printf("succesful search");
    }
    else
    {
        printf("not succesful search");
    }
    return 0;
}