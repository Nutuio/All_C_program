#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",& age );
    if(18<=age)
    {
        printf(" a person is driving license : \n");
    }
    else
    {
        printf("a person is not driving license : \n");
    }
    return 0;
}