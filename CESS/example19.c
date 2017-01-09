#include <stdio.h>

unsigned long long  fact(unsigned int n);

int main(int argc, char **argv) {
  unsigned int n = 10;
  printf("Factorial of %X is %X \n", n, fact(n));
}

unsigned long long  fact(unsigned int n) {
  if (n <= 1) {
    return 1;
  } else {
    return (n * fact(n - 1));
  }
}