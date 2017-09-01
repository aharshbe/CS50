#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(void){


printf("Enter a work you'd like to capitalize: ");


string s = get_string();


if (s != NULL){


    for (int i = 0; i < strlen(s); i++){

        //If the character is greater than or equal to the value of 'a' print out the character put subract 32 essentially capitzaling it since the -32 value of 'a' is the capital variant

        if(s[i] >= 'a' && s[i] <= 'z'){

            printf("%c", s[i] - 32);


        }else{

            printf("%c", s[i]);

        }


    }
        //To get rid of the new line bug
        printf("\n");

}


    return 0;
}