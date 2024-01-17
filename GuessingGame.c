/*The user has to guess a number from 0-5\
output whether it is right or wrong*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate a random number
    // a pseudo number
    srand(time(NULL));
    int randomNumber = rand() % 5;
    int input;
    // printf("%d\n",randomNumber);
    printf("Guess a number from 0 - 5\n");
    scanf("%d", &input);
    if(input == randomNumber)
    {
        printf("You win!");
    }
    else
    {
        printf("You dont Win!");
    }
    return 0;
}