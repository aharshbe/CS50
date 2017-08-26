#include <stdio.h>
#include <cs50.h>


int main(void){

    printf("Please choose a number: ");
    int x = get_int();

    //regular if/else if/else expression

    if (x < 1) {
        printf("X is less than 1.\n");
    }else if (x > 1){
        printf("X is great than 1.\n");
    }else {
        printf("X is 1\n");
    }

    //?: expression or tuinary operator (single condition)

    (x > 1) ? printf("X is greater than 1.\n") : printf("X is 1.\n");

    //To add another condition (multiple conditions)

    (x > 1) ? printf("X is greater than 1.\n") ?: printf("X is less than 1.\n") : printf("X is 1.\n");





    return 0;
}