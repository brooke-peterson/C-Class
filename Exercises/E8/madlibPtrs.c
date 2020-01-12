#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* create a function to choose each word
 * you should pass in a random number into the function
 * your function should return one of the exclamations at random
 */
char *exclamations()
{
    // create a few of your own exclamations
    // keep it PG for future generations

    // return exclamation
}

/*
 *
 *  do the same for the nouns, adjectives, adverbs
 *
 */

char *combineWords(char **words)
{
    // declare your variables

    // create space for a variable (hint use: malloc)

    /* combine all of the words into a sentence
     maybe strcat? */

    // return the sentence here
}

int main()
{
    // declare your variables
    time_t t;
    char **chosenWords;
    char *answer;

    /* Intializes random number generator */
    srand((unsigned)time(&t));
    // example for how to choose a random number from 0-4
    int random_number = rand() % 5;

    // select random words and call your functions here.

    // print the combined sentence here

    return 0;
}
