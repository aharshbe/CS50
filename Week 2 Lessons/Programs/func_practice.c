#include<stdio.h>
#include<cs50.h>

//Declaring the functions
int add_two_ints(int a, int b);
double mult_two_reals(double x, double y);

int main(void)
{
    //Calling the function
    add_two_ints(1, 2);

    //If you're not going to print or output the functions value in the function def.
    //then you can do so by assigning it after the fact to a varibale of the same type
    double f = mult_two_reals(5, 7);

    printf("%f\n", f);

    return 0;
}

//Defining the function
int add_two_ints(int a, int b)
{

    int c = a + b;
    printf("%i + %i = %i\n", a, b, c);
    //Because the function is not void, it must return some sort of value
    return 0;
}

double mult_two_reals(double x, double y)
{
    //This implementation is great except for it can only really be returned by main?
    return x * y;
}