#include<stdio.h>
#include<cs50.h>

int main(void)
{

    //Declare an array of type int with 100 elements
    int index_array[100];
    int index_array_copy[100];

    //Iterate over the array at each elements' index
    for(int i = 0; i < 100; i++){

        //Assign a value to the index at the given element in the array
        index_array[i] = i + 1;

        //Print out to confirm all went well
        printf("Elemenet %i of index_array is: %i\n", i , index_array[i]);
    }

    //Example of copying one array into another via each individual element
    for (int j = 0; j < 100; j++){

        index_array_copy[j] = index_array[j];

        eprintf("Elemenet %i of index_array_copy is: %i\n", j , index_array[j]);
    }
}