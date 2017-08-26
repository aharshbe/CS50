#include <stdio.h>
#include <cs50.h>


int main(void){


    printf("X is: ");

    float x = get_float();

    printf("Y is: ");

    float y = get_float();


    printf("%f + %f = %f!\n", x, y, x + y);

    printf("%f minus %f is %f!\n", x , y, x - y);

    printf("%f x %f is %f!\n", x , y, x * y);

    printf("%f / %f is %f!\n", x, y, x / y);

    return 0;

}