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