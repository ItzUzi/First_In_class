#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
* This program will calculate a restaurant bill from 
* a random choice of meals/prices and user inputted
* tax and tip percent from the command line. 
*/

int main(int argc, char *argv[])
{
    double defaultPercentage = 0.10;
    double tax;
    double tip;
    time_t t;
    int randomNumber;

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
    char *meals[4];
    meals[0] = "Salad";
    meals[1] = "Soup";
    meals[2] = "Sandwhich";
    meals[3] = "Pizza";

    // initizialized double array to hold prices
    double prices[] = {9.95, 4.55, 13.25, 22.35};

    /*
    * created instance of random
    * gave a limit of 4 to how large the random
    * number can be
    */
    srand((unsigned) time(&t));
    randomNumber = rand() % 4;

    // gave value from arrays to meal and price
    char *meal[1];
    double price = prices[randomNumber];
    meal[0] = meals[randomNumber];

    // Gets total prices of of meal
    double taxPrice = price + (price*tax);
    double totalPrice = taxPrice + (taxPrice*tip);

    tax *= 100;
    tip *= 100;

    printf("The %s is priced at: $%.2f\n", meal[0], price);
    printf("Tax is: %.2f%%\n", tax);
    printf("Tip is: %.2f%%\n", tip);
    printf("Total price is: $%.2f\n", totalPrice);

    return 0;
}
