#include<stdio.h>
#include<cs50.h>

//Declaring the function
bool valid_triangle(double a, double b, double c);


int main(void)
{
    printf("Please choose a number (1): ");
    double f = get_int();
    printf("Please choose a number (2): ");
    double g = get_int();
    printf("Please choose a number (3): ");
    double h = get_int();

    //Calling the function; should return true.
    return valid_triangle( f,  g,  h);
}

//Defineing the function that takes in 3 reals
bool valid_triangle(double a, double b, double c)
{
    //if two of the numbers are not greater than 0, i.e., are negative, then the function should now start
    if (a + b >= 0 && a >= 0 && b >=0){
        //if the two numbers added together are greater than one side, i.e., a trianglge
        if (a + b > c && a + c > b && c + b > a){
            printf("Cowabunga, you have a triangle!\n");
            return true;
        }else {
            printf("The numbers provided do not equal a triangle because two sides added together are not greater than the other.\n");
            return false;
        }
    }else {
        printf("Please choose a number that is not negative, triangles don't have negative numbers.\n");
        return false;
    }

}