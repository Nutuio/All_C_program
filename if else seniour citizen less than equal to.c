#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",& age );
    if(60<=age)
    {
        printf("you are seniour citizen  ");
    }
    else
    {
        printf("you are not seniour citizen ");
    }
    return 0;
}