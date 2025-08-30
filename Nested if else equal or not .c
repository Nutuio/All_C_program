#include<stdio.h>
int main()
{
    int no,equal=10,halfequal=10/2,doubleequal=10*2;
    printf("Enter a number : ");
    scanf("%d", & no);
    if(no<equal)
    {
        printf("the number is less %d \n",equal);
        if(no>halfequal)
        {
            printf("the number greater than %d. but less than %d\n",halfequal,equal);
        }
        else
        {
            printf("the number is less than %d. \n",halfequal);
        }
    }
    if(no>doubleequal)
    {
        printf("the number is greater than %d. \n",doubleequal);
    }
    else
    {
        printf("the is  less than or equal to  %d.\n ",doubleequal);
    }
    return 0;
}