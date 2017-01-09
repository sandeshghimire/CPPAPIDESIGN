#include <stdio.h>

unsigned int myatoi(char * number);

int main(int argc, char** argv)
{
    char * numbers = "12345x6789";

    printf("the total number is %d \n", myatoi(numbers));

    return 0;
}

unsigned int myatoi(char * number)
{
    unsigned total;

    while(*number != '\0')
    {
        if ((*number < 48 ) || ( *number > 57) )
        {
            return -1;
        } 

        total =  ( *number - 48)  + total * 10;

        
        printf("numbers %c  %d \n", *number++, total );
    }

    return total;
}