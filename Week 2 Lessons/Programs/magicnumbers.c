#include<stdio.h>
#include<cs50.h>
#define austin Austin
#define x y
#define PI 3.14159265
#define squash 10
#define COURSE "CS50"
#define DECKSIZE 52



int main(){

    string austin = "Austin";
    int x = 0;


    //The #define above allows you to use a different phrasing for a varible and still have it work the same, like find/replace
    printf("%s\n", Austin);
    printf("%i\n", y);
    printf("%f\n", PI);
    printf("%i\n", squash);
    printf(COURSE"\n");

    //#define(s) are treated by C the same as variables
    printf("%i\n", DECKSIZE + 1);


    return 0;
}