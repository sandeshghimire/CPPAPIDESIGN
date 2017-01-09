#include <stdio.h>

int main(int argc, char **argv) {
  unsigned int number = 0x01;

  printf("the number is %d \n", number);

  // shift bit by 9

  number ^= number;

  printf("the number is %d \n", number);

  number ^= number;

  printf("the number is %d \n", number);

  number ^= number;

  printf("the number is %d \n", number);

  number ^= number;

  printf("the number is %d \n", number);

  return 0;
}