#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",& age );
    if(age>=18)
    {
        printf("a person can driving license ");
    }
    else
    {
        printf("a perosn cannot driving license ");
    }
    return 0;
}