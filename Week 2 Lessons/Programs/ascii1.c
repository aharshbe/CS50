#include<stdio.h>
#include<cs50.h>

//C can also use character values as numbers to do things.

int main(void){

    for (char c = 'A'; c <= 'Z'; c++){

        //implicitly implying the casting of an int, otherwise I could have explicitly cast by typing '(int) c'

        printf("%i is %c\n", c, c);

    }

    return 0;
}