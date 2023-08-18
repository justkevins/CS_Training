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
    printf("\nThe matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe diagonal matrix is: ");
    for(i =0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(i != j)
            {
                printf(" ");
            }
            else
            {
                printf("%d ",arr[i][j]);
            }
        }
    }
}