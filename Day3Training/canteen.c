#include <stdio.h>

int main()
{
    int option, option1;
    printf("----MENU----\n");
    printf("SELECT AN OPTION FROM MAIN MENU");
    printf("\n1.COFFEE\n 2.TEA\n 3.SOUPS\n 4.BEVERAGES\n");
    printf("ENTER SELECTION:");
    scanf("%d", &option);
    switch (option)
    {
    case (1):
        printf("CHOOSE AN OPTION:\n1. Espresso Coffee \n2. Cappuccino Coffee \n3. Latte Coffee\n ");
        printf("SELECT AN OPTION FROM SUB MENU");
        scanf("%d", &option1);
        break;
    case (2):
        printf("\nCHOOSE AN OPTION:\n1. Plain Tea \n2. Assam Tea\n 3. Ginger Tea\n 4. Cardamom Tea \n5. Masala Tea \n6. Lemon Tea \n7. Green Tea\n 8. Organic Darjeeling Tea \n");
        printf("SELECT AN OPTION FROM SUB MENU:");
        scanf("%d", &option1);
        break;
    case (3):
        printf("\nCHOOSE AN OPTION:\n1. Hot and Sour Soup\n 2. Veg Corn Soup \n3. Tomato Soup \n4. Spicy Tomato Soup\n");
        printf("SELECT AN OPTION FROM SUB MENU");
        scanf("%d", &option1);
        break;
    case (4):
        printf("CHOOSE AN OPTION :\n1. Hot Chocolate Drink\n2. Badam Drink \n3. Badam-Pista Drink\n");
        printf("SELECT AN OPTION FROM SUB MENU");
        scanf("%d", &option1);
        break;
    default:
        printf("WRONG OPTION");
        break;
    }
}