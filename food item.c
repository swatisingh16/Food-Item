#include <stdio.h>

int main()
{
    printf("Pick a food item : \n1. Pizza\n2. Burger\n3. Pasta\n4. French Fries\n5. Sandwich\n");
int num;
scanf("%d", &num);
switch(num)
{
    case 1: 
       printf("You have chosen Pizza\n and It's price is Rs239");
       break;
    case 2: 
       printf("You have chosen Burger\n and It's price is Rs129");
       break;
    case 3: 
       printf("You have chosen Pasta\n and It's price is Rs179");
       break;
    case 4: 
       printf("You have chosen French Fries\n and It's price is Rs99");
       break;
    case 5: 
       printf("You have chosen Sandwich\n and It's price is Rs149");
       break;
    default:
       printf("Invalid Choice");
}
return 0;
}
