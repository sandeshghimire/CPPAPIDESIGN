#include <stdio.h>


// shift to left and shift to right 

int main(int argc, char** argv)
{
    unsigned int number = 0x01;

    // shift bit by 9
    
    printf("the number is %d \n", number);

    // shift bit by 9

    number = number << 8;

    printf("the number is %d \n", number);


    number = number >> 8;

    printf("the number is %d \n", number);


    return 0;
}