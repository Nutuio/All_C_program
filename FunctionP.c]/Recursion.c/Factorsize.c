#include<stdio.h>
void factorsize(int,int);
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",& num);
    printf("prime factors are :");
    factorsize(num, 2);
    return 0;
}
void factorsize(int n, int i)
{
    if(i<=n)
    {
        if(n % i== 0)
        {
            printf("%d",i);
            n=n/i;
        }
        else
        i++;
        factorsize (n,i);
    }
}