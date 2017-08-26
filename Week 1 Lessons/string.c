#include <stdio.h>
#include <cs50.h>


int main(void){

    printf("What is your name?\n");

    printf("Name: ");

    string response = get_string();

    printf("Hello, %s!\n", response);


}