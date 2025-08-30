#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", & age );
    if(18<age)
    {
        printf("a person can driving license ");
    }
    else
    {
        printf("a person cannot driving license ");
    }
    return 0;
}