#include <stdio.h>
int main()
{
    int n;
    char i, j;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=i; j<=n; j++)
        {
            printf("%c ", i+64);
        }
        printf("
");
    }
}