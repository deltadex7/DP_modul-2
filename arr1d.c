#include <stdio.h>

int main(int argc, char const *argv[])
{
    // set array size
    int n;
    scanf("%d", &n);

    // create array
    int arr1d[n];

    // fill array
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1d[i]);
    
    // print array
    for (int i = 0; i < n; i++)
        printf("arr1d[%d] = %d\n", i, arr1d[i]);
    
    return 0;
}
