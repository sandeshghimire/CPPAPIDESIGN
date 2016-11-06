#include <stdio.h>

int main(int argc, char **argv) 
{
  unsigned int number = 0x2;
  unsigned int tmp = 0;

  printf("the number is %d \n", number);

  // clear bit 
  number = (number | 1) << 10;
  printf("the number is %d \n", number);
  tmp = ~(  (tmp | 1) << 10); 
  number &= tmp;

  number &= ~(1 << 1);

  printf("the number is %X \n", number);
  return 0;
}