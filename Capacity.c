#include <stdio.h>
int main()
{
    int T, S, B, bytes, Kilobytes;
    scanf("%d%d%d", &T, &S, &B);
    bytes = 2*T*S*B*512;
    Kilobytes = bytes/1024;
    printf("%d KB", Kilobytes);
}