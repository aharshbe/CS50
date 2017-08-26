#include <cs50.h>
#include <stdio.h>

int main(void){

    printf("Please enter either Y/N: ");

    char c = get_char();

    //another way to use an if/else
    //may be more aestetically please

    switch(c){

        case 'y':
        case 'Y':
            printf("Yes.\n");
            break;
        case 'n':
        case 'N':
            printf("No.\n");
            break;

        default:
            printf("Error.\n");
            break;

    }

return 0;

}