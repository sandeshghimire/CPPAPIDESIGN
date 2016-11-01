#include <stdio.h>

unsigned int le_to_be(unsigned int value);

int main(int argc, char **argv) {

  unsigned int data = 0xAABBCCDD;

  printf("the value is %X \n", data);

  le_to_be(data);

  return 0;
}

unsigned int le_to_be(unsigned int value) {
  
  unsigned int be = 0x00;
  unsigned char *tmp;
  tmp = &value;
  unsigned char i = 4;
  unsigned char j = 0;

  //be = be | *(tmp) << 24;
  //be = be | *(tmp+1) << 16;
  //be = be | *(tmp+2) << 8;
  //be = be | *(tmp+3) ;
  
  while(--i){
    be = be | *(tmp + j++) << i * 8;
  }
  
  
  
  
  printf("the value is %X \n", be);
  return be;
}