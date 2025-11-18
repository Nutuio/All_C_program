#include<stdio.h>
void swapv(int x,int y); // ---> Function Decleration
// pass by value 
int main()
{
    int a=10,b=20;
    swapv(a,b);// swapv(10,20)
    printf("a = %d, b = %d \n",a,b);
    return 0;
} 
void swapv(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("x = %d, y = %d \n",x,y);
}