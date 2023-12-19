#include <stdio.h>
int main()
{
    int n, i, found=0;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ser;
    scanf("%d", &ser);
    for(i=0; i<n; i++)
    {
        if(arr[i] == ser) {
            found=1;
            break;
        }
    }
    if(found==0) {
        printf("False");
    }
    else {
        printf("True");
    }
}