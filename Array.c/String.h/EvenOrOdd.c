#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char name[]="Notu";
    l=strlen(name);
    printf("Enter a number :");
    scanf("%c",name);
    if(l%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number ");
    }
    return 0;
}
