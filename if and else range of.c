#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no>=10 && no<=20)
    {
        printf("the number in the range  of 10 and 20  ");
    }
    else
    {
        printf("the number in the range  out  of 10 and 20 ");
    }
    if(no>=30 && no<=40)
    {
        printf("the number in the range of 30 and 40");
    }
    else
    {
        printf("the number in the range out of 30 and 40");
    }
    return 0;
}