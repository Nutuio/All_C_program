#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,l3,l4;
    char name1[]="Notu";
    char name2[]="Arnab";
    char name3[]="Joy";
    char name4[]="Bijoy";
    l1=strlen(name1);
    l2=strlen(name2);
    l3=strlen(name3);
    l4=strlen(name4);
    int a[4]={l1,l2,l3,l4};
    printf("%d,%d,%d,%d",l1,l2,l3,l4);
    return 0;
}