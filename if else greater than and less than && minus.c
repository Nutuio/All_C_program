#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no<=-50 && no>=-60)
    {
        printf("the number is range of -50 and -60  ");
    }
    else
    {
        printf("the number is range out of -50 and -60 ");
    }
    return 0;
}