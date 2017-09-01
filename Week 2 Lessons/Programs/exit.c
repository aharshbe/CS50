#include<stdio.h>
#include<cs50.h>


int main(int argc, string argv[]){

    if (argc != 2){

        printf("Hey, user, you're missing a comman-line arugment!\n");

        //Can be anything, just an 'exit code' that's generally useful only to the programmer

        return 1;
    }

    printf("Hello, %s.\n", argv[1]);

    return 0;
}