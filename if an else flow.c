#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no==32)
    {
        printf("a perosn can  eat ");
    }
    else if(no>=1 && no<=32)
    {
        printf("a perosn can not eat properly ");
    }
    else
    {
        printf("a person can  not eat ");
    }
    return 0;
}