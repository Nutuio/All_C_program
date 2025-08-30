#include<stdio.h>
int main()
{
    int no;
    printf("Enter a number : ");
    scanf("%d", & no);
    if((no>=20 && no<=10) || (no>=30 && no<=40))
    {
        printf("the number can in range between 10 to 20 ");
    }
    else
    {
        printf("the number is outsight of  range ");
    }
    return 0;
}