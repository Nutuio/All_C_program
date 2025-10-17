#include<stdio.h>
#include<string.h>
int main()
{
    int l,i=0;
    char name[]="Notu";
    l=strlen(name);
    for(i=0;i<l;i++)
    {
        printf("%c",name[i]);
    }
    printf("%s",name);
    return 0;
}