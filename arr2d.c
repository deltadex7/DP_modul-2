#include <stdio.h>

int main(int argc, char const *argv[])
{
    // set array size
    // rows
    int m, 
    // cols
        n;
    scanf("%d %d", &m, &n);

    // create 2d array
    int arr2d[m][n];

    // fill array
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr2d[i][j]);
    
    // print array
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            printf("arr2d[%d][%d] = %d\n", 
            i, j, arr2d[i][j]);
    
    return 0;
}
