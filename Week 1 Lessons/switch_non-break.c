#include <stdio.h>
#include <cs50.h>

int main(void){


    printf("Please select a number: ");
    int x = get_int();
    switch(x){
        case 5:
            printf("Five, ");
        case 4:
            printf("Four, ");
        case 3:
            printf("Three, ");
        case 2:
            printf("Two, ");
        case 1:
            printf("One, ");
        default:
            printf("Blast-off!\n");
    }

    //Because there is no break statement after each case, all cases run from the number provided by the user.

    return 0;
}