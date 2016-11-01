#include <stdio.h>

int  mystrcpy(char *src, char *dest);

int main(int argc, char** argv)
{
    char src[255] = "Hello how are you ?";
    char dest[255];
    mystrcpy(src, dest);
    printf("the src is %s \nand dest %s \n", src, dest);
}


int  mystrcpy(char *src, char *dest)
{
    while(*(src) != '\0')
    {
        *dest++ = *src++;
    }
    return 0;
}