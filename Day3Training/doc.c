#include<stdio.h>
 void main()
 {
    int totalearnings=0,age[20],p;
    printf("\nEnter the total patients vistited: ");
    scanf("%d",&p);
    printf("\nEnter age of each patient: ");
    for(int i=0; i < p; i++)
    {
        age[i] = 0;
        printf("\nAge of patient %d: ",(i+1));
        scanf("%d",&age[i]);

        if(age[i] > 0 && age[i] < 17)
        {
            totalearnings+= 200;
        }
        else if(age[i] >= 17 && age[i] < 40)
        {
            totalearnings+= 400;
        }
        else if(age[i] > 40 && age[i] < 120)
        {
            totalearnings+= 300;
        }
    }
    printf("\nTotal earnings: %d",totalearnings);

 }