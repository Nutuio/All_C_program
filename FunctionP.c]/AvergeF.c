#include<stdio.h>
#include<math.h>
void averge(int a, int b, int c, int d, int e, int *av);
int main()
{
    int avg=0;
    int a=10, b=20,c=30,d=40,e=50;
    printf("the value of avg before invoke %d \n",avg);
    averge(a,b,c,d,e,&avg);
    printf("the value of avg after invoke %d \n",avg);
    return 0;
}
void averge(int a, int b, int c, int d, int e,int *av)
{
    *(av)=(a+b+c+d+e)/5;
}