#include <stdio.h>


int main(int argc, char** argv)
{
    unsigned int number = 0xABCDEFAA;

    unsigned char * p = (unsigned char *)(&number);
    unsigned char num = (unsigned char) number;

    printf("%X and %X \n\n", number, num);


     printf("%X  %X  %X %X %X\n\n", *p, *(p+1), *(p+2), *(p+3), *(p+4)); // little endian 

    return 0;
}