#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check(int input, int random, int tries);
int main(void)
{
    srand(time(0));

    int random_number = (rand() % 20) + 1;
    int guess;
    int score = 0;

    check(guess, random_number, score);
}

int check(int input, int random, int tries)
{ 
    printf("Guess a number between 0 - 20: ");
    scanf("%d", &input);
    tries++;

    if (input  < 0 || input > 20)
    {
        printf("Number out of range!\n");
        return check(input, random, tries);
    }

    if (random == input)
    {
        printf("You got it right, Congrats the number was %d\n", random);
        printf("Number of tries: %d\n", tries);
        return 0;
    }

    else if (random != input)
    {
        printf("Sorry, wrong number, try again\n");
        return check(input, random, tries);
    }
}