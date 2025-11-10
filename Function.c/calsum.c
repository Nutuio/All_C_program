#include<stdio.h>
int calsum(int x, int y, int z) // defining
{
    int d;
    d=x+y+z;
    return d;
}
int main() // define
{
  int a,b,c,sum;
  printf("Enter three numbers :");
  scanf("%d %d %d",&a,&b,&c);
  sum=calsum(a,b,c);//invoking
  printf("the sum is : %d\n",sum);
  return 0;
}