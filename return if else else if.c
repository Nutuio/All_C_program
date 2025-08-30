#include<stdio.h>
int main()
{
    int no,limit=20,halflimit=20/2,doublelimit=20*2;
    printf("Enter a number : ");
    scanf("%d",& no);
    if(no<limit)
    {
        printf("the number is less than 20 ");
        if(no<halflimit)
        {
            printf("the less than %d \n ",10);
        }
        else if(no==halflimit)
        {
            printf("the is equal to %d \n",10);
        }
        else
        {
            printf("the number is greater  than %d \n",10);
        }
        if(no>doublelimit)
        {
            printf("the number is less than %d \n",40);
        }
        else if(no==doublelimit)
        {
            printf("the number is equal to %d \n",40);
        }
        else
        {
            printf("the greater than %d \n",40);
        }
    }
    return 0;
}