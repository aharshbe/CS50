#include<stdio.h>
#include<cs50.h>

//Declare global variable

int global_x = 2;

//Declare function

int func_to_use_global(int x);

int main(void)
{

    //Calling function which will multiple the global variable by the number given

    func_to_use_global(5);

    while (global_x <= 160)
    {
        //Printing the value of the global variable

        printf("The value of the global variable is: %i\n", global_x);
        global_x = global_x*2;
    }


    return 0;
}


int func_to_use_global(int x)
{

    global_x = global_x * x;

    return 0;
}