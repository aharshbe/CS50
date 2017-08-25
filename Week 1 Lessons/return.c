#include <stdio.h>
#include <cs50.h>

int square(int value);


int main(){

    printf("X is: ");

    int x = get_int();

    printf("x^2 is %i\n", square(x));

    return 0;
}

//To declare a function that returns a value

int square(int n){

     return n * n;

}