#include <stdio.h>

int reverse(char *msg);

int main(int argc, char **argv)
{
    char msg[256] = "the house and the mouse and the cat and the hat and mike and trick";
    printf("%s \n", msg);

    printf("the length is %d \n ", reverse(msg));

    printf("The string is %s \n", msg);
}

int reverse(char *msg)
{
    int len = 0;
    char * head, *tail;
    char * ch = msg;
    int i = 0;

    char c;
    while (*ch++ != '\0')
    {
        len++;
    }

    head = msg;
    tail = (msg+len);

    for (i = 0; i < len / 2; i++)
    {
        *ch = *head;
        *head++ = *tail;
        *tail++ = *ch;
        
    }

    msg[len] = '\0';

    printf("%s \n", msg);

    return len;
}