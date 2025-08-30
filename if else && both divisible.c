#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", & n);
    if(n%9==0 && n%3==0)
    {
        printf("the number is both divisiable by 9");
    }
    else
    {
        printf("the number is both divisiable by 9 and 3");
    }
    return 0; 
}