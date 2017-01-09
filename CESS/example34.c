#include <stdio.h>

union {
  unsigned char bytes[8];
  unsigned int ints[2];
  unsigned long int dubint;

  struct {
    unsigned long int upper : 32;
    unsigned long int lower : 32;
  } bits;
} u;

int main(int argc, char **argv) {

  u.dubint = 0xAABBCCDDAABBCCDD;
  printf("%X %X \n", u.ints[0], u.ints[1]);
  u.bits.upper = 0x55;
  u.bits.lower = 0x78;

  printf("%X %X \n", u.ints[0], u.ints[1]);

  return 0;
}