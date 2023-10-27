#include <stdio.h>
int main()
{
    int side, A, V;
    scanf("%d", &side);
    A = 6*(side*side);
    V = side*side*side;
    printf("Surface area = %d and Volume = %d", A, V);
}