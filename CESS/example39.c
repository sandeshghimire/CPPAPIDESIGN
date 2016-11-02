#include <stdio.h>
#include <stdlib.h>

#define EOL '\0'

void printCharAtTime(char * msg);

int main(int argc, char** argv)
{
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