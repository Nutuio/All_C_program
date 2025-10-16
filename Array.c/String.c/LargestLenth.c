#include<stdio.h>
int main()
{
    int l1=4,l2=3,l3=5,lg=0;
    char name1[]="Notu";
    char name2[]="Joy";
    char name3[]="Bijoy";
    if(l1>lg)
    {
        lg=l1;
    }
    if(l2>lg)
    {
        lg=l2;
    }
    if(l3>lg)
    {
        lg=l3;
    }
    printf("the largest lenth is : %d",lg);
    return 0;
}