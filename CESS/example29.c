#include <stdio.h>

int main(int argc, char **argv)
{

    isBitPalindrome(0x100);

    return 0;
}

int isBitPalindrome(unsigned int value)
{
    unsigned int reversed = value;
    unsigned int aux = value;

    while (aux > 0)
    {
        reversed = reversed << 1;
        printf("%X \n", reversed);

        aux = aux >> 1;
        printf("%X \n", aux);
    }
}