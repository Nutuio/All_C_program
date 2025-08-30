#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no>0)
    {
        printf("the number is postive ");
    }
    else if(no==0)
    {
        printf("the number is equal to 0 ");
    }
    else
    {
        printf("the number is negetive ");
    }
    return 0;
}