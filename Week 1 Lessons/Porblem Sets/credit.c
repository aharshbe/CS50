#include<stdio.h>
#include<cs50.h>


//Declaring method for checksum
void calculate_checksum(long long credit_card_number_check);

int main(void)
{

    //Pompt user to enter their credit card number
    printf("Please enter your credit card number to check if it's valid: ");
    long long credit_card_number = get_long_long();

    //Check to make sure the numbers they entered are positive and !negative
    while (credit_card_number < 0)
    {
        printf("Number invalid! Please re-enter your credit card number: ");
        credit_card_number = get_long_long();
    }

    printf("Checking your credit card number, thanks for your patience ...\n");


    //Calculate credit card checksum
    calculate_checksum(credit_card_number);







}



void calculate_checksum(long long credit_card_number_check)
{

    long long cc_number = credit_card_number_check;

    for (int i = 0; i < sizeof(cc_number) / 2; i++)

    {


        cc_number = (cc_number / 10) % 10;


        printf("%lld\n", cc_number);

    }







}

