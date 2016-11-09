#include <stdio.h>
#include <stdlib.h>

#define EOL '\0'

void printCharAtTime(char * msg);

int main(int argc, char** argv)
{

    int x = 500;
    
    sum(x, x, x, x++);

    return 0;
}


int sum(int a, int b, int c, int d)
{
    printf("a is %d \nb is %d \nc is %d \nd is %d \n", a, b , c , d);

    char msg[256] = "my name is james jung 2.0 ";
    printCharAtTime(msg);
    return 0;
}


void printCharAtTime(char * msg)
{
    while((*msg) != EOL)
    {
        printf("%c ", *msg++);

    }
    printf("\n");


}