#include <stdio.h>

int swapArray(char to[], char from[], int len);

int main(int argc, char** argv)
{
    char msg [256]= "my name is james jung 2.0 \n";
    char msgx [256] ;

    swapArray(msg, msgx, 50);
    printf("%s \n%s \n",msg, msgx );

    return 0;
}

int swapArray(char to[], char from[],int len)
{
    int i = 0;
    for(i = 0; i < len ; i++)
    {
        from[i] = to[i];

    }
    
}