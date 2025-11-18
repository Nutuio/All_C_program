#include<stdio.h>
void areaperi(int r, float *a, float *p);
int main()
{
    int radius;
    float area = -1.0, perimeter = -2.0;
    printf("Area before invoking =%f\n",area);
    printf("perimeter before invoking =%f\n",perimeter);
    printf("Enter the redius of circle :");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area after invoking =%f\n",area);
    printf("perimeter after invoking =%f\n",perimeter);
    return 0;
}
void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2 * 3.14 * r;
}