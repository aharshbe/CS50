#include<stdio.h>
#include<cs50.h>

//Returns the int value of a string


int main(void){

    printf("Enter a string you'd like to know the length of: ");


    string s = get_string();

    int n = 0;

    while (s[n] != '\0'){


        n++;

    }

    printf("%i\n", n);


    return 0;
}