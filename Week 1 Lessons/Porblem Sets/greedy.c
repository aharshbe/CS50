#include<stdio.h>
#include<cs50.h>



int main(void)
{
    //Ask user how much change is owed
    printf("How much change do I owe you sir/ma'm? ");
    float change_owed = get_float();

    //Unfortunately couldn't think of a better way to do this as floats are too exact? Then double, and ll are more exact and couldn't use int
    change_owed = change_owed + 0.001;




    if (change_owed < 0)
    {
        printf("Please enter a positive number of change that I owe you dummy. Try again! How much change do I owe? ");
        change_owed = get_float();
    }

    while(change_owed > 0)
    {

        int min_number_of_coins = 0;
            //Check for number of quarters

            if (change_owed / .25 > 0.00){
                int number_of_quarters = change_owed / .25;
                min_number_of_coins = number_of_quarters;

               //Check for number of dimes

                if (change_owed - number_of_quarters * .25 != 0.00){
                    float change_left = change_owed - number_of_quarters * .25;
                    int number_of_dimes = change_left / .10;
                    min_number_of_coins = number_of_quarters + number_of_dimes;


                     //Check for nickels

                    if (change_owed - number_of_quarters * .25 != 0.00 && change_owed - (number_of_quarters * .25)
                        + (number_of_dimes * .10) != 0.00 && change_owed - (number_of_quarters * .25)
                        + (number_of_dimes * .10) != 0.00){
                        change_left = change_owed - (number_of_quarters * .25) - (number_of_dimes * .10);
                        int number_of_nickels = change_left / .05;
                        min_number_of_coins = number_of_quarters + number_of_dimes + number_of_nickels;


                        //Check for pennies

                        if (change_owed - number_of_quarters * .25 != 0.00 && change_owed - (number_of_quarters * .25)
                        + (number_of_dimes * .10) != 0.00 && change_owed - (number_of_quarters * .25)
                        + (number_of_dimes * .10) + (number_of_nickels * .05) != 0.00){
                            change_left = change_owed - (number_of_quarters * .25) - (number_of_dimes * .10) - (number_of_nickels * .05);
                            int number_of_pennies = change_left / .01;
                            min_number_of_coins = number_of_quarters + number_of_dimes + number_of_nickels + number_of_pennies;

                        }

                    }

                }


            }

            //Print the min number of coins
            printf("%i\n", min_number_of_coins);
        break;
    }
}