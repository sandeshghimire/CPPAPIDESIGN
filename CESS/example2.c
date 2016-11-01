#include <stdio.h>

int main(int argc, char **argv) {
  unsigned int number = 0x00;

  printf("the number is %d \n", number);
  // set bit 10

  number = (number | 1) << 10;

  printf("the number is %d \n", number);

  printf("Hello World");
  return 0;
}