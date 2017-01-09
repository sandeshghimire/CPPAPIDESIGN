#include <stdio.h>


// swap without temp variable 

int main(int argc, char** argv)
{
    int x = 5; 
    int y = 6;

 printf("two numbers are %d %d \n", x, y);
    x = x^y;
    y = y^x;
    x = x^y;

    printf("two numbers are %d %d \n", x, y);
    return 0;
}