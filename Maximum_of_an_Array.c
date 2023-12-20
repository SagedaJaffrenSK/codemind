#include <stdio.h>
int main()
{
    int N, n;
    scanf("%d", &N);
    int arr[N];
    for(n=0; n<N; n++)
    {
        scanf("%d", &arr[n]);
    }
    int max=arr[0];
    for(n=0; n<N; n++)
    {
        if(arr[n] > max)
        {
            max = arr[n];
        }
    }
    printf("%d", max);
    return 0;
}