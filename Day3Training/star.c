#include<stdio.h>
 void main()
 {
    int n,i,j;
    printf("\nEnter number:");
    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
      for(j = i; j < n; j++)
      {
         printf("*");
      }
      printf("\n");
    }
    for(i = 0; i <= n; i++)
    {
      for(j = 1; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
    }
    
 }