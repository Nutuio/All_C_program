#include<stdio.h>
float power(float,int);
int main()
{
   float x,pow;
   int y;
   printf("\n enter a number ");
   scanf("%f %d",&x,&y);
   pow=power(x,y); // invoking
   printf("the power is %f %d %f\n",x,y,pow);
   return 0;
}
float power(float x,int y) // defining
{
    int i;
    float p=1;
    for(i=1;i<=y;i++)
        p=p*x;
        return p;
}