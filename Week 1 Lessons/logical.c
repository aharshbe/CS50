#include <stdio.h>
#include <cs50.h>

int main(void){

    printf("Please choose Y/N: ");

    char c = get_char();

    //In C, it's imporant to dicern singe vs. double quotations, where singe should be used when delcaring or using a char variable

    if (c == 'y' || c == 'Y') {

        printf("Yes\n");


    }else if (c == 'n' || c == 'N'){

        printf("No\n");


    }else {

        printf("Try again, answer invalid.\n");
    }


    return 0;
}