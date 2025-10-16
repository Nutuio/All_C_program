#include<stdio.h>
#include<string.h>
int main()
{
    int  i=1,l1,l2,l3,f=1;
    char name1[]="Notu";
    char name2[]="Arnab";
    char name3[]="Joy";
    l1=strlen(name1);
    l2=strlen(name2);
    l3=strlen(name3);
    for(i=1;i<=l1;i++)
    {
        f=f*i;
    }
    printf("the factorial is : %d %d",f,l1);
    f=1;
    for(i=1;i<=l2;i++)
    {
        f=f*i;
    }
    printf("the factorial is : %d %d",f,l2);
    f=1;
    for(i=1;i<=l3;i++)
    {
        f=f*i;
    }
    printf("the factorial is :  %d %d",f,l3);
    f=1;
    return 0;
}