#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int MAX_VALUE = 100;
static int max = 10;

void numberGuesser(){
    
}

/*
* Asks user to change max limit of guessing number game.
*/
void changeNumber(){
    int newMax = -1;
    char input;

    printf("Please enter a new max value that is ");
    printf("greater than 0 but less than %d\n", MAX_VALUE);
    scanf("%s", &input);
    if (atoi(&input) && atoi(&input) > 0 && atoi(&input) <= MAX_VALUE){
        newMax = atoi(&input);
        printf("New max is: %d\n", newMax);
        max = newMax;
    }else
        changeNumber();

    
    
    
}

/*
* Interactive number guessing game in which user
* will guess number from 1-10 unless changed by user using 
* the change method
*/
int main(int argc, char const *argv[])
{
    int option;
    printf("Welcome to my number guesser\n");
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");

    while (option != 3)
    {
        char input;
        printf("Please enter either 1-3: ");
        scanf("%s", &input);
        printf("\n");
        option = atoi(&input);

        if (option == 1){
            numberGuesser();
        } else if (option == 2){
            changeNumber();
        }else if (option == 3){
            printf("Thank you for playing!\n");
            printf("GoodBye!!!");
        }else
        {
            printf("\n\n\nPlease input a number between 1 - 3\n\n\n");
            
        }
        
        
    }
    
    return 0; 
}

