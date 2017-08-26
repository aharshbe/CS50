#include <stdio.h>
#include <cs50.h>

int main(void){


    printf("X is: ");

    int x = get_int();

    printf("Y is: ");

    int y = get_int();

    int b = x + y;

    printf("%i + %i = %i!\n", x, y, b);

    printf("The sum of x + y = %i\n", x + y);


    return 0;
}