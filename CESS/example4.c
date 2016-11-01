#include <stdio.h>

int main(int argc, char **argv) 
{
  unsigned int number = 0x00;
  unsigned int tmp;

  printf("the number is %d \n", number);
  // clear bit 

  number = (number | 1) << 10;

  printf("the number is %d \n", number);

 tmp = ~(  (tmp | 1) << 10); 

  printf("the number is %d \n", tmp);
  return 0;
}