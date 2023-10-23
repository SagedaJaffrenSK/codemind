#include <stdio.h>
int main()
{
    int N, M, X, C;
    scanf("%d%d%d", &N, &M, &X);
    C = 2*(N+M)*X;
    printf("%d", C);
}