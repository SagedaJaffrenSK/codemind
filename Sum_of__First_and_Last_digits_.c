#include <stdio.h>
int main()
{
    int n, i, fdig, ldig, sum=0;
    scanf("%d", &n);
    ldig = n%10;
    while(n>=10)
    {
         n = n/10;
    }
    fdig = n;
    sum = fdig + ldig;
    printf("%d", sum);
    return 0;
}