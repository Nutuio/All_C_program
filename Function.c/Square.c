#include<stdio.h>
float square(float); //deleartion
int main()
{
    float a,b;
    printf("Enter any number :");
    scanf("%f",&a);
    b=square(a);//invoking
    printf("square is : %f\n",b);
    return 0;
}
float square(float x) //defining
{
    float y;
    y=x*x;
    return y;
}