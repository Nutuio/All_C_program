#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,tl;
    char name1[]="Notu";
    char name2[]="Arnab";
    l1=strlen(name1);
    l2=strlen(name2);
    tl=l1+l2;
    printf("the total lenth is : %d",tl);
    return 0;
}