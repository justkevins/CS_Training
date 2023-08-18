#include<stdio.h>

int main()
{
    int exte,inte,i,j;
    float surfaceext[10],surfaceint[10];
    float costint=0,costext=0,totalint=0,totalext=0,total;

    printf("\n****Paint Property Cost****");

    printf("\nEnter the number of Interior walls: ");
    scanf("%d",&inte);
    printf("\nEnter the number of Exterior walls: ");
    scanf("%d",&exte);

    printf("\nEnter the surface area of interior walls: ");
    for(i=0; i<inte; i++)
    {
        printf("\nEnter surface area of wall %d: ",(i+1));
        scanf("%f",&surfaceint[i]);
        totalint+= surfaceint[i];
          
    }
    printf("\nEnter the surface area of exterior walls: ");
    for(i=0; i<exte; i++)
    {
        printf("\nEnter surface area of wall %d: ",(i+1));
        scanf("%f",&surfaceext[i]);
        totalext+= surfaceext[i];   
    }
    total = (totalint*18) + (totalext*12);
    printf("\nTotal Cost of painting: %f",total);
   

   return 0;
    
}