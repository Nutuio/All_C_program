#include<stdio.h>
void fun(int,int);//decleartion
int main()
{
    int a=30;
    int x=10;
    fun(a,x);//invoking
    printf("%d\n",a);
    return 0;
}
void fun(int a,int b) //defining ---> fun(30,10)
{
    b=60;
    printf("%d\n",b);
}