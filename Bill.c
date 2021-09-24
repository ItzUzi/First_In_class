#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    double defaultPercentage = 0.10;
    double tax;
    double tip;

    /*
    * If there are not 3 arguments in command line (exluding string call)
    * default values will be used
    */
    if(argc != 3){
        tax = defaultPercentage;
        tip = defaultPercentage;
    }else
    {
        // Parsing char arguments into type double
        tax = strtod(argv[1], NULL);
        tip = strtod(argv[2], NULL);
    }

    /* 
    * initialized char array of length 4x10
    * to hold values of food items
    */
    char meals[4][10];
    strcpy(meals[0], "Salad");
    strcpy(meals[1], "Soup");
    strcpy(meals[2], "Sandwhich");
    strcpy(meals[3], "Pizza");

    // initizialized double array to hold prices
    double prices[] = {9.95, 4.55, 13.25, 22.35};
    
    char meal[1][10];
    double price = prices[0];

    strcpy(meal[0], meals[0]);

    // Gets total prices of of meal
    double taxPrice = price + (price*tax);
    double totalPrice = taxPrice + (taxPrice*tip);

    printf("The %s is priced at: %.2f\n", meal[0], price);
    printf("Tax is: %.2f%%\n", tax);
    printf("Tip is: %.2f%%\n", tip);
    printf("Total price is: %.2f\n", totalPrice);

    return 0;
}
