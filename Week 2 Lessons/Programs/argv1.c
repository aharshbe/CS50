#include<stdio.h>
#include<cs50.h>

//Will print out any arugments passed to the program at runtime


int main(int argc, string argv[]){


    for(int i = 0; i < argc; i++){

        //To remove the name of the program so that it doesn't print and make things muddy

        argv[0] = "";


        printf("%s ", argv[i]);

    }

    printf("\n");


    return 0;
}