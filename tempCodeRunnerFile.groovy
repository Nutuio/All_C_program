#include <stdio.h>
int main()
{
    int n = 86, r, s = 0, cp;   // n=86 is the number we want to test
    cp = n;                     // ✅ copy original number to cp

    while (n > 9)               // loop until n becomes a single digit
    {
        while (n != 0)          // break down n digit by digit
        {
            r = n % 10;         // get last digit
            s = s + (r * r);    // add square of digit
            n = n / 10;         // remove last digit
        }
        n = s;                  // now n becomes sum of squares
        s = 0;                  // reset sum for next round
    }

    if (n == 1)                 // ✅ check if result is 1
    {
        printf("Happy Number");
    }
    else
    {
        printf("Not a Happy Number");
    }
    return 0;
}

