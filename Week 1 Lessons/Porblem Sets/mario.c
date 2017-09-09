#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //Prompts the user to validate the height of the pyramid
    printf("How high would you like your Mario(TM) pyramid to be? ");
    int height_of_pyramids = get_int();

    //Validate height meets specifications:

    while(height_of_pyramids > 24 || height_of_pyramids < 0){

        printf("Please choose a number that is less that or equal to 23 and not negative.\n");
        printf("Please choose your height: ");
        height_of_pyramids = get_int();

    }


    //For each row
    for (int i = 1; i <= height_of_pyramids; i++){

        //print left pryamid

        //print spaces
         for (int j = height_of_pyramids; j > i; j--){
            printf(" ");
        }

        //printf left pyramid hashes
        for (int k = 0; k < i; k++){
            printf("#");
        }

        // //print gap
        // printf("  ");

        // //print right pryramid hashes
        // for (int l = 0; l < i; l++){
        //     printf("#");
        // }


        printf("\n");

    }





}



