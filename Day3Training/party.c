#include<stdio.h>
 void main()
 {
    int t,sum=0,max=0,index;
    printf("\nEnter time: ");
    scanf("%d",&t);
    int E[t],L[t];
    printf("\nGuest Enter and exit:\n");
    for(int i = 0; i < t; i++)
    {
        scanf("%d",&E[i]);
    }
     for(int i = 0; i < t; i++)
    {
        scanf("%d",&L[i]);
    }
    for(int i = 0; i < t; i++)
    {
        sum = sum + (E[i]-L[i]);
        if(max < sum)
        {
            max = sum;
            index = i;
        }
    }
    printf("\nMax person on cruise ship at instance: %d",max);
 }