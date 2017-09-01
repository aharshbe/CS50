#include<stdio.h>
#include<cs50.h>

//This program prints out the ASCII character for each letter in our alphabet

int main(void){


 for (int i = 65; i < 65 + 26; i++){

     //To explicitly cast char to an int, just do below

     printf("%c is %i\n", (char) i , i);

     //Oddly enough it's not acctually needed because since we told c we are going to be using a character (%c) for the first variable, you don't need to cast char

     eprintf("%c is %i\n", i , i);

 }

    return 0;
}