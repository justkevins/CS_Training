#include<stdio.h>
 void main()
 {
    char arr[100];
    printf("\nEnter string :");
    scanf(" %[^\n]%*c",arr);
    printf("%s",arr);
 }