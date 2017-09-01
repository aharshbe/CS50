#include<stdio.h>
#include<cs50.h>

//Two arguments the c main method can take
//The arguement vector denotes the number of arguements given when running the program at hand, for example, in the lines below,
//the program logic is looking for more than 1 arguement (2) and if it == 2, then it will print the given phrase plus the arugment passed
//The arugments passed can be really anything, for example other programs


int main(int argc, string argv[]){

    if (argc == 2){

        printf("Hello, %s!\n", argv[1]);

    }else {

        printf("Hello, world!\n");
    }

    return 0;
}