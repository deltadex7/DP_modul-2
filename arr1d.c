#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    int arr1d[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1d[i]);
    
    for (int i = 0; i < n; i++)
        printf("arr1d[%d] = %d\n", i, arr1d[i]);
    
    return 0;
}
