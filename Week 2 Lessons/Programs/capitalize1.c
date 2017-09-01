#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

//A much simpler version of the capitalize program except it uses a pre-built function of c


int main(void){


printf("Enter a work you'd like to capitalize: ");


string s = get_string();


if (s != NULL){


    for (int i = 0; i < strlen(s); i++){

       printf("%c", toupper(s[i]));

    }

    printf("\n");

  }

    return 0;

}