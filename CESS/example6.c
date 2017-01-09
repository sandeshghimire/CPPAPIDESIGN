#include <stdio.h>

int myStrlen(char *str);
void reverse_string(char *str);

int main(int argc, char **argv) {
  int len = 0;
  char *hello = "my name is james 2.0";
  printf("string %s \n", hello);
  printf("length %d \n", myStrlen(hello));

  reverse_string(hello);
  printf("reverse %s \n", hello);
}

int myStrlen(char *str) {
  int counter = 0;
  while (*str++ != '\0') {
    counter++;
  }
  return counter;
}

void reverse_string(char *str) {
  char ch;
  int i = 0;
  int len = myStrlen(str) - 1;

    printf("ch is %c", ch);
  for (i = 0; i < len / 2; i++) {
    
    ch = str[i];
    
    printf("ch is %c", ch);

    str[i] = str[len - i];
    
    str[len - i] = ch;
    
    i++;
  }
}