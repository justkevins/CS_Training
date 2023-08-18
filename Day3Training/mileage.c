#include<stdio.h>
 void main()
 {
    float mi,dist,fuel,miles;

    printf("\nEnter fuel: ");
    scanf("%f",&fuel);
    printf("\nEnter total distance upto dry in KM: ");
    scanf("%f",&dist);

    mi = (fuel/dist)*100;
    printf("\nMileage in liter/dist = %.2f",mi);

    miles = (dist*0.6214/fuel*0.2642);
    printf("\nMileage in miles/gallons = %.2f",miles);

 }