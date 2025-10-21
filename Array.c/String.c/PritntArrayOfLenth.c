#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l1,l2,l3,l4,l5;
    char name1[]="Notu";
    char name2[]="Arnab";
    char name3[]="Joy";
    char name4[]="Bijoy";
    char name5[]="Ajoy";
    l1=strlen(name1);
    l2=strlen(name2);
    l3=strlen(name3);
    l4=strlen(name4);
    l5=strlen(name5);
    int a[5]={l1,l2,l3,l4,l5};
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}