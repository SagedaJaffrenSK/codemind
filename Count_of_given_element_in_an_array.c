#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count=0, ser;
    scanf("%d", &ser);
    for(i=0; i<n; i++)
    {
        if(arr[i]==ser)
        {
            count++;
        }
    }
    printf("%d", count);
}