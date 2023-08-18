#include <stdio.h>

void main()
{
    int arr[10][10], i, j, r, c;
    printf("\nEnter row and coloumn: ");
    scanf("%d",&r);
    scanf("%d",&c);
    printf("\nEnter array: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nSpiral matrix: ");
    int k = 0, l = 0;
    while (k < r && l < c)
    {
        for (i = l; i < c; i++)
        {
            printf(" %d", arr[k][i]);
        }
        k++;
        for (i = k; i < r; i++)
        {
            printf(" %d", arr[i][c - 1]);
        }
        c--;
        if (k < r)
        {
            for (i = c - 1; i >= 0; --i)
            {
                printf(" %d", arr[r - 1][i]);
            }
            r--;
        }
        if (l < c)
        {
            for (i = r-1; i >= k; i--)
            {
                printf(" %d", arr[i][l]);
            }
            l++;
        }
    }
}