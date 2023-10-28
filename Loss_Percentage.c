#include <stdio.h>
int main()
{
    float X, Y, L, Z;
    scanf("%f%f", &X, &Y);
    L = X-Y;
    Z = (L*100)/X;
    printf("%.2f", Z);
}