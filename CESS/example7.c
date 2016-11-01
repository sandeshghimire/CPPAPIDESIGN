#include <stdio.h>

typedef struct  pid{
    unsigned char  p;
    unsigned char i;
    unsigned char d;
}pid;


int main(int argc, char** argv)
{

    unsigned char * ptr ;

    struct pid p;

    p.p = 0xAA;
    p.i = 0xBB;
    p.d = 0xCC;

    ptr = (unsigned char *)&p;

    printf("%X %X %X \n", *ptr++, *ptr++, *ptr++);

    
    return 0;
}