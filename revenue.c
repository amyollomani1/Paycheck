#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    printf("Welcome to \"Temple\" store\n");
    printf("\n");    
    double itemPrice;
    double quantity;


    printf("\tEnter item price: ");
    scanf("%lf", &itemPrice);
    double intpart = 0;
    if (itemPrice <=0||( modf(itemPrice, &intpart) !=0)){
          printf("\n");
          printf("\tThis is not a valid item price.\n\tPlease run the program again");
          printf("\n");
          printf("\nThank You for using \"Temple\" store");
          exit(1);
    }
    printf("\tEnter quantity: ");
    scanf("%lf", &quantity);

    if (quantity<=0||( modf(quantity, &intpart) !=0)){
          printf("\n");
          printf("\tThis is not a valid quantity order.\n\tPlease run the program again");
          printf("\n");
          printf("\nThank You for using \"Temple\" store");
          exit(1);
    }
    double discountRate;

    if(quantity>0 & quantity <50) discountRate = 0;
     else if (quantity>49 & quantity <100) discountRate = .1;
     else if(quantity>99 & quantity <150) discountRate = .15;
    else if(quantity>149) discountRate = 0;

    double cost = itemPrice * quantity;
    double discountAmount = cost * discountRate;
    double total = cost - discountAmount;
    
    printf("\n");
    printf("\tThe item price is: $%0.1lf\n", itemPrice);
    printf("\tThe order is: %0.0lf item(s)\n", quantity);
    printf("\tThe cost is: $%0.1lf\n", cost);
    printf("\tThe discount is: %0.1lf%%\n", discountRate*100);
    printf("\tThe discount amount is: $%0.1lf\n", discountAmount);
    printf("\tThe total is: $%0.1lf\n", total);

    printf("\n");
    printf("Thank You for using \"Temple\" store\n");

    return 0;
}

