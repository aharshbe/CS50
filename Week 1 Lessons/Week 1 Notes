Week 1: 

1. Values of each major primitive in bits/bytes: 

#include <stdio.h>

#include <cs50.h>

int main(void){

    printf("bool is %lu\n", sizeof(bool)); //1 byte of space
    printf("char is %lu\n", sizeof(char)); //1 byte of space
    printf("double is %lu\n", sizeof(double)); //8 bytes of space
    printf("float is %lu\n", sizeof(float)); //4 bytes of space
    printf("int is %lu\n", sizeof(int)); //4 bytes of space
    printf("long long is %lu\n", sizeof(long long)); //8 bytes of space
    printf("string is %lu\n", sizeof(string)); //8 bytes of space

    //space based on a 64-bit operating system
    //As a point of reference, 1 bite is = 0, 2, 4, 8, 16, 32, 64, 128 or 8 bits

return 0;

}

2. Changing the decimal point value of an integer (float):

#include <stdio.h>
#include <cs50.h>

int main(void){

    //You can change the number of decimal points you see by appending the given number to the variable

    printf("%.50f\n", 1.0 / 10.0);

return 0;

}

Various data types of use:

- long long
- string
- char
- int
- double
- float
- bool

Thier vairbale declaration: 

- long long: %lld
- char: %c
- int: %i
- float: %f
- double: %d
- string: %s
- bool: %b

Making your own functions: 

#include <stdio.h>
#include <cs50.h>

void their_name();
void print_name(string name);


int main(){

    //Creating your own functions

    their_name();

    return 0;
}

//Creating custom function

void print_name(string name){

    printf("Hello, %s\n", name);

}

//Making my own

void their_name(){

    printf("What's your name?\n");
    printf("Name: ");

    string s = get_string();
    print_name(s);

}

Data Types:
    - INT values take up 4 bytes of memeory
    - INTs have 32bits work for space (4*8, 8 bits in a bytes). Half of that storage is allocated to positive ints and ther other half to negative, -2^32 and 2^32-1 respectively (you need the -1 to account for 0)
    - UNSIGNED INTs: doubles the effective range that an int can take on because it removes the negative range
    - UNSIGNED is an qualifiers which is used to modify a primitive
    - CHAR store singe characters and take up 1 byte of memory or 8 bits. -128 to 128
    - FLOAT or floating point numbers or real numbers (w/decimal point) are also 4 bytes of memory -- the same number of bits to work with as INT values
    - FLOATS have a precision problem 
    - DOUBLEs like floats are used to store real numbers but instead can fit 8 bytes or 64 bits of data.

Conditional Statements: 
    - Allow a program to take different forks in the road depending on the value of the variables or user input
    - Example of confitionals, if/else 
    - if/else is mutually exclusive, meaning that whichever condition is met wil run, ! multiple conditions
         -Example:
            if (){}
            else if(){}
            else if(){}
            else {}
    - If you want to create a non-multually exclusive if/else block, just place if statments and the else statement at the end of the bloc instead of if/else if ... etc
        -Example:
            if (){}
            if (){}
            if (){}
            else {}
    - Another type of conditional is a switch statement, allowing specification of distinct cases.
    - Example of a switch staement: 
        int i = get_int();
        switch(i){
            case 1: 
                printf();
                break;
            case 2: 
                printf();
                break;
            case (i < 10): 
                printf();
                break;
           }
    - Make sure to always include break statement unless you intentionally want to run a series of things at one time.
    - The last conditional is a turinary operator or ?: or a way to use if/else
        Explained: Is the question true, if it is, do what follows the ? if it isn't, do what follows the :.
    - To use mutliple conditions with a tiernary operator use ?:

Loops:
    - Allow programs to execute code over and over without having to copy/paste code
    - Types of loops:
        - While (true) {} or infinite loop unless a break statement is defined 
        - while (boolean) {}, bascially repeat until the boolean expression is no longer true, for example if you used a counter
        Example:  
                
                int i = 0;
                
                while(i < 10){
                    
                printf("i = %u\n", i); 

                i++;
                 }
        
    - do loop, similar to a while loop except executes until the condtion is not met vs while where it does what its doing while it is met
         Example: 
               
                int x = 0; 
              
                do {
                printf("hello\n")              
                 } 
                
                while (x < 10);

    - for loops, generally used for repeating something a specific number of times. 
        Example:        
                for (int f = 0; f < 5; f++;){

                    printf("f = %i\n", f);           
                    
                }
    - When should you use certain types of loops? 
        - While loops:  
            Use when you want a loop to repeat an unknown number of times, and  possible not at all, e.g., in a game when you don't know how long a user will do something but you want something to happen
        - Do-while loops:
            Use when you want a loop to repeat an unknown number of times, but at least once, e.g., prompting the user for input   
        - For loops:
            Use when you want a loop to repeat a discrete number of times, though you may not know the number at the moment the program is compiled, e.g., prompt the user for a number, and then do something for a given number of times, unlike a while loop it should never be infite
    - **Worth noting you can use them interchangeabily, but try to abide by convention above

