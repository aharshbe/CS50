#include <stdio.h>
#include <cs50.h>


int main(void) {

    //Infinite while loop:

    printf("Infinite while loop:\n");

    //while (true){printf("This will never stop.\n");}

    //Conditional while loop that prints a number of times, i.e., while this is true, execture what's in brackets this:

    printf("Conditional while loop:\n");

    int i = 0; while(i < 5){printf("i = %i\n", i); i++;}

    //Do loop that prints until the last condition is met, i.e., do this until this is true & untile a while loop will run at least once:

    printf("Do loop while:\n");

    int x =0; do {printf("x = %i\n", x); x++;} while (x < 5);

    //For loop:

    printf("For loop:\n");

    for (int f = 0; f < 5; f++){
        printf("f = %i\n", f);
    }

    return 0;

}