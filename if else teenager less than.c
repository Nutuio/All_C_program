#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", & age );
    if(age<20)
    {
        printf("you are not teenager ");
    }
    else
    {
        printf("you are teenager ");
    }
    return 0;
}