#include <stdio.h>
int  main()
{
    float X, Y, P, Z;
    scanf("%f%f", &X, &Y);
    P = Y-X;
    Z = (P*100)/X;
    printf("%.2f", Z);
}