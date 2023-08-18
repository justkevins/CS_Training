#include <stdio.h>

void main() 
{
    int r, c, arr[10][10], temp = 0, index = 0, count, i;
    
    printf("\nEnter rows: ");
    scanf("%d",&r);
    printf("\nEnter colums: ");
    scanf("%d",&c);
    
    printf("\nEnter the parking matrix:\n");
    for (i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++) 
    {
        count = 0;
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }
        
        if (temp < count) 
        {
            temp = count;
            index = i;
        }
    }

    printf("\nRow %d has the most filled parking spaces: %d spaces filled.\n", index+1, temp);
}
