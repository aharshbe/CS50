#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){

printf("Please enter some string to display char values: ");

string s = get_string();

//To factor in the possibily that the string function may return a null value, use the following logic --

if (s != NULL){

//strlen is how you determine the length of a given input

for (int i = 0; i < strlen(s); i++){

    //Takes the given number of an an array and allows you to access it: s[i]

    printf("%c\n", s[i]);

    }

}

    return 0;
}