#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,s=0;
    char name1[]="Notu";
    char name2[]="Arnab";
    l1=strlen(name1);
    l2=strlen(name2);
    s=l1+l2;
    printf("the sum is : %d",s);
    return 0;
}