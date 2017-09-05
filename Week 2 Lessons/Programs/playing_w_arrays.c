#include<stdio.h>
#include<cs50.h>

int main(void)

{

    //Delcaring an array of strings that contain 6 elements
    string names[6];

    //Both declaring an intializing an array in the same line (since that's the case, you don't need to declare the size of the array)
    string names1[] = {"Nadia", "Frank", "Jessica", "Alex", "Austin", "Melissa"};

    //Initializing array names
    names[0] = "Austin";
    names[1] = "Collin";
    names[2] = "Steve";
    names[3] = "Jill";
    names[4] = "Mark";
    names[5] = "Kenya";

    for (int i = 0; i < 6; i++){

        //Printing out the contens of both arrays
        printf("Thier name is: %s\n", names[i]);
        eprintf("Thier name is: %s\n", names1[i]);
    }


    return 0;
}