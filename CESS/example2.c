#include <stdio.h>

int main(int argc, char **argv) {

  unsigned int number = 0x00;

  int counter = 10;
  printf("the number is %d \n", number);
  // set bit 10

  number |= 1 << 10;

  printf("the number is %X \n", number);

  //number |= 1 << 11; // this is set

  printf("the number is %X \n", number);

  number &= ~(1 << 10); // this is clear 

  printf("the number is %X \n", number);

  while (counter--) { // this is toggle 

    number  ^= (1 << 10);
    printf("%X \n", number);
  }

  return 0;
}