#include<stdio.h>
#include<cs50.h>

int main(void){


    printf("X is: ");

    int x = get_int();

    printf("Y is: ");

    int y = get_int();

    printf("%i + %i = %i!\n", x, y, x + y);

    printf("%i minus %i is %i\n", x , y, x - y);

    printf("%i x %i is %i\n", x , y, x * y);

    printf("%i / %i is %d\n", x, y, x / y);

    printf("Reaminder of %i divided by %i is %i\n", x , y, x % y);


    return 0;


}
