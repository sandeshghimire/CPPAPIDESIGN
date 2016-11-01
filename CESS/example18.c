#include <stdio.h>

int reverse(char * msg);


int main(int argc, char** argv)
{
    char * msg = "the house and the mouse and the cat and the hat and mike and trick";
    printf("%s \n", msg);

    printf("the length is %d \n ",reverse(msg));

    printf("The string is %s \n", msg);

}

int reverse(char * msg)
{
    int len = 0;
    char * ch = msg;
    int i = 0;

    while(*ch++ != '\0')
    {
        len++;
    }

    for(i = 0; i < len/2; i++)
    {
        ch = msg[i];
        printf("ch is %c \n", ch);
        *(msg+i) = *(msg - len -i);
        //msg[len-i] = ch;
    }


    return len;
}