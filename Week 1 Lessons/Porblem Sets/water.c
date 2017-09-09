#include<stdio.h>
#include<cs50.h>


int main(void)
{

    //Prompting the user for input
    printf("How long do you spend in the shower? (minutes please): ");

    //Getting the users time in the shower
    int minutes_in_shower = get_int();

    //Calculating the number of bottles used relative to the amount of time in the shower
    int bottles_of_water = minutes_in_shower * 12;

    //Printing results, i.e., confirmation
    printf("Minutes: %i\n", minutes_in_shower);
    printf("Bottles: %i\n", bottles_of_water);

    return 0;
}