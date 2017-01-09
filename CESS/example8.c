#include <stdio.h>


int length(char * msg);
int swap(char * msg);
int join(char * src, char * dest);

int main(int argc, char** argv)
{
    char * msg = "i am james john 2.0";

    char king[256] = "This is king kobra ";




    int len = length(msg);

    printf("length is %d \n", len);

    join(king, msg);

    printf("the total message is %s \n", king);

    return 0;
}

int length(char * msg)
{
    int len = 0;
    while(*msg++ != '\0')
    {
        len++;
    }
    return len;
}
int swap(char * msg)
{
    int len = length(msg);
    char ch ;
    int i = 0;
    for(i = 0; i < len/2; i++)
    {
        ch = msg[i];
        msg[i]= msg[len-i];
        msg[len-i] = ch;
        
    }
return 0;
}
int join(char * src, char * dest)
{
    while(*src++ != '\0')
    {

    }
    src--;

    while(*dest != '\0')
    {
         //printf("%c\n", *dest);
        *src++ = *dest++;

       
    }

}