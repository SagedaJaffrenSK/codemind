#include <stdio.h>
int main()
{
    int n;
    char i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", j+64);
        }
        printf("
");
    }
}