#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int MAX_VALUE = 100;
static int max = 10;

/*
* Program with number guessing, takes user input and compares it
* to the number that was randomly selected.
*/
int numberGuesser(){
    time_t t;
    int randomNumber, guess;
    int counter = 0;
    srand((unsigned) time(&t));
    randomNumber = (rand() % max) + 1;
    // printf("Number to guess is %d\n", randomNumber);
    char input;

    /**
     * Keeps looping until user guesses the random number or 
     * selects q to quit the loop.
    */
    while (guess != randomNumber)
    {
        printf("Please guess a number from 1 - %d.\n", max);
        printf("Or press q to quit\n");
        scanf("%s", &input);
        guess = atoi(&input);

        if(input == 'q'){
            return 0;
        }
        if (guess > randomNumber)
            printf("Your guess is too high!\n");
        if(guess < randomNumber)
            printf("Your guess is too low!\n");
        counter++;
    }

    printf("Nice you guessed right, the number was %d\n", randomNumber);
    printf("It took you %d tries to guess the number\n", counter);
    
    return 1;
}

/*
* Asks user to change max limit of guessing number game.
*/
void changeNumber(){
    FILE *fileWrite;
    int newMax = -1;
    char input;

    printf("Please enter a new max value that is ");
    printf("greater than 0 but less than %d\n", MAX_VALUE);
    scanf("%s", &input);
    newMax = atoi(&input);
    // Checks if newMax is within bounds
    if (newMax > 0 && newMax <= MAX_VALUE){
        printf("\n\nNew max is: %d\n\n", newMax);
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
    printf("\n\n\nWelcome to my number guesser\n");

    while (option != 3)
    {
        char input;
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        
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

