#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
        option = atoi(&input);
        if (option != 1 && option != 2 && option != 3)
        {
            printf("\n\n\nPlease input a number between 1 - 3\n\n\n");
            continue;
        }

    
    }
    
    return 0; 
}
