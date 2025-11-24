#include<stdio.h>
int rec(int); // declertions
int main()
{
   int a, fact;
   printf("Enter any number :");
   scanf("%d",&a);
   fact=rec(a); // invoking 
   printf("Factorial value is : %d\n",fact);
   return 0;
}
int rec(int x) // defining 
{
    int f;
    if (x==2)
    return (2);
    else
    f = x * rec(x-1); //invoking
    return (f);
}