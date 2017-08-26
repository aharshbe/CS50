#include <stdio.h>
#include <cs50.h>

void their_name();
void print_name(string name);


int main(){

    //Creating your own functions

    their_name();


    return 0;
}

//Creating custom function

void print_name(string name){

    printf("Hello, %s\n", name);

}

//Making my own

void their_name(){

    printf("What's your name?\n");
    printf("Name: ");

    string s = get_string();
    print_name(s);



}