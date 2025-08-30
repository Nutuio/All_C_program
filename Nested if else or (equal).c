#include<stdio.h>
int main()
{
    int no,equal=10,halfequal=10/2,doubleequal=10*2;
    printf("Enter a number : ");
    scanf("%d", & no );
    if(no<equal)
    {
        ("the number is less than %d.\n",equal);
        if(no>halfequal)
        {
            printf("the number is  greater than %d but less than %d.\n", equal, halfequal);
        }
        else
        {
            printf("the number is less or equal %d \n",halfequal);
        }
    }
    if(no>doubleequal)
    {
        printf("the number is greater than %d \n", doubleequal);
    }
    else
    {
        printf("the number is less than or equal to   %d \n", doubleequal);
    }
    return 0;
}