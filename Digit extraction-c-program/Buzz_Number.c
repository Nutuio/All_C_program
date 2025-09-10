#include<stdio.h>
int main()
{
    int n=47,cp,last_digit;
    cp=n;
    while(n!=0)
    {
        last_digit=n%10;
        if(last_digit==7 || cp%7==0)
        {
            printf("it is a buzz number ");
        }
        else
        {
            printf("it is not a buzz number ");
        }
        break;
    }
}