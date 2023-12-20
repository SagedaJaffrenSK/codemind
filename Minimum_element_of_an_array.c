#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[n];
    for(a=0; a<n; a++)
    {
        scanf("%d", &arr[a]);
    }
    int min=arr[0];
    for(a=0; a<n; a++)
    {
        if(arr[a] < min)
        {
            min = arr[a];
        }
    }
    printf("%d", min);
    return 0;
}