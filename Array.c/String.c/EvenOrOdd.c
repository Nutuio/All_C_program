#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char name[]="Notu";
    l-strlen(name);
    if(l%2==0)
    {
        printf("the number is even ");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}