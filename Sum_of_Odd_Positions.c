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
    int odd_sum=0;
    for(i=0; i<n; i++)
    {
        if(i%2==1) 
        {
            odd_sum += arr[i];
        }
    }
    printf("%d", odd_sum);
}