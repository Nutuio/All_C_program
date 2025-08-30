#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", & age );
    if(20<=age)
    {
        printf("you are teenager ");
    }
    else
    {
        printf("you are not teenager");
    }
    return 0;
}