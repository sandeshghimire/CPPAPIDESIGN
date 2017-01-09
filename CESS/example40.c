#include <stdio.h>

int myFucntion (int a, int b) ;

int main(int argc, char **argv) 
{
  int len = (*myFucntion)(1, 2);
  return 0;
}

int myFucntion (int a, int b) 
{
  printf("hello world %d %d \n", a, b);
  return 0;
}