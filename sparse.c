#include <stdio.h>
void main ()
{
    int matrix[10][10];
    int i, j, m, n;
    int sparse_counter = 0;
 
    printf("Enter the order of the matix \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                ++sparse_counter;
            }
        }
    }