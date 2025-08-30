#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", & n);
    if(n%10==0)
    {
        printf("the number is divisiable ");
        if(n%2==0)
        {
            printf("the number is divisiable ");
        }
        else
        {
            printf("the number is not divisiable ");
        }
    }
    else
    {
        printf("the number is not divisiable ");
    }
    return 0;
}