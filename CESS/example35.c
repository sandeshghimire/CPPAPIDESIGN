#include <stdio.h>

typedef struct {
  float real;
  float img;

} complex;

int main(int argc, char **argv) {

  complex c;
  c.real = 3.0;
  c.img = 4.7;
  

  double *dp = (double *) &c;

  printf("the real and complex relationship %f %f \n", c.real, c.img);
   printf("the real and complex relationship %f %f %f \n", *dp, *(dp+1), *(dp+2));

  return 0;
}