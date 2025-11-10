#include<stdio.h>
int fact(int);//decleartion
int main()
{
    int num;
    int factorial;
    printf("\nEnter a number :");
    scanf("%d",&num);
    factorial=fact(num);//invoking
    printf("the factorial is : %d\n",factorial);
    return 0;
}
int fact(int num)//define
{
    int i;
    int factorial=1;
    for(i=1;i<=num;i++)

        factorial=factorial*i;
        return factorial;
}