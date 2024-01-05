#include <stdio.h>
int main()
{
    float i, a, sum=0, n=0;
    scanf("%f", &a);
    for(i=1; i<=a; i++)
    {
        sum += 1.0/(i+n);
    }
    printf("%.2f", sum);
}