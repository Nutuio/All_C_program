#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", & n);
    if(n%10==0 && n%2==0)
    {
        printf("the number is both divsiable by 10 ");
    }
    else
    {
        printf("the number is both divisiable by 2 and 10 ");
    }
    return 0;
}