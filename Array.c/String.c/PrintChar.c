#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="Notu";
    int i=0,l;
    l=strlen(name);
    for(i=0;i<l;i++)
    {
        printf("%c",name[i]);
    }
    printf("%s",name);
    return 0;
}