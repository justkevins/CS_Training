#include<stdio.h>

void main()
{
    int weight;
    printf("\nEnter weight of clothes between 0grams to 7000grams(int)");
    scanf("%d",&weight);

    if(weight > 7000)
    {
        printf("\nMachine OVERLOAD!!!");
    }
    else if(weight < 0)
    {
        printf("\nINVAILD INPUT");
    }

    if(weight >= 0 && weight <= 2000)
    {
        printf("\nEstimated Time: 25 minutes");
    }
    else if((weight >= 2001) && (weight <= 4000))
    {
        printf("\nEstimated Time: 35 minutes");
    }
    else
    {
        printf("\nEstimated Time: 45 minutes");
    }
}