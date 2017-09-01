#include<stdio.h>
#include<cs50.h>
#include<string.h>

//Will print out any arugments passed to the program at runtime
//Also incidentailly and example of a two dimentional array


int main(int argc, string argv[]){


    // iterate over all the items in argc
    for(int i = 0; i < argc; i++){

      //iterate over characters in current string
      for (int j = 0; j < strlen(argv[i]); j++){

          // print j'th character in i'th string
          printf("%c\n", argv[i][j]);


      }


    }

    printf("\n");


    return 0;
}