#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", & n);
    if(n%2==0 && n%3==0 && n%6==0)
    {
        printf("the number is divisiable by 2 ,3,6");
    }
    else
    {
        printf("the number is divisiable by 2,3,6 ");
    }
    return 0;
}