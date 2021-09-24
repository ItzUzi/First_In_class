#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    double defaultPercentage = 0.10;
    double tax;
    double tip;

    char meals[4];
    strcopy(meals[0], "Salad");
    strcopy(meals[1], "Soup");
    strcopy(meals[2], "Sandwhich");
    strcopy(meals[3], "Pizza");
    
    double prices[] = {9.95, 4.55, 13.25, 22.35};
    
    /*
    * If there are not 3 arguments in command line (exluding string call)
    * default values will be used
    */
    if(argc != 4){
        tax = defaultPercentage;
        tip = defaultPercentage;
    }else
    {
        // Parsing char arguments into type double
        tax = strtod(argv[1], NULL);
        tip = strtod(argv[2], NULL);
    }
    double totalPrice = taxPrice + (taxPrice*tip);

    printf("The %s is priced at: %.2f\n", meal, price);
    printf("Tax is: %.2f%%\n", tax);
    printf("Tip is: %.2f%%\n", tip);
    printf("Total price is: %.2f\n", totalPrice);

    return 0;
}
