#include <stdio.h>
#include <cs50.h>

void print_word(string their_word);
void cough(int their_number_choice);

int main(void){


    printf("Choose a word if you please!\n");
    printf("Word: ");

    string their_word = get_string();

    print_word(their_word);

    printf("Choose a number of times to print cough!\n");
    printf("How may times?: ");

    int their_choice_of_times = get_int();

    cough(their_choice_of_times);

return 0;

}


void print_word(string their_word){

    for (int i = 0; i < 3; i++){

         printf("%s\n", their_word);
    }

}


void cough(int their_number_choice){

    for (int i = 0; i < their_number_choice; i++)

    printf("Cough\n");

}