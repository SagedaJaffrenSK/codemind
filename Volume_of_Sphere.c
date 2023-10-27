#include <stdio.h>
int main()
{
    float R, V;
    scanf("%f", &R);
    V = (4*3.14*R*R*R)/3;
    printf("%.2f", V);
}