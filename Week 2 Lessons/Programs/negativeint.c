#include<stdio.h>
#include<cs50.h>

int gets_negative_int();


int main(void){


    int i = gets_negative_int();

    printf("Your number is negative, it's: %i\n", i);
    printf("Thanks for playing! ;-)\n");

    return 0;
}


int gets_negative_int(void){

    printf("Please select a number: ");

    int f = get_int();


while (f >= 0){

   while (f >= 0) {

       printf("Your number is not negative, it's: %i\n", f);
       printf("Try again: ");
       f = get_int();

   }
        return f;

}

return f;

}