#include<stdio.h>

void main()
{
    int arr[4],i;
    char arr1[] = {'p','q','r','s'};
    printf("\nEnter the 4 inputs: ");
    for(i=0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
        arr1[i] = (char)arr[i];
        printf("\n%d = %c",arr[i],arr1[i]);
    } 

}