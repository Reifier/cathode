/* An unsafe primitive to quickly translate a binary byte into a decimal */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {

  char bytes[8];
  printf("Please input string of 8 bytes that you would like to decimate:\n ");
  fgets(bytes,9,stdin);
  int i;
  int value = 0;
  int number;
  for(i = 0; i <= 7; i++) {
    number = bytes[i] - '0';
    value = value + pow(2, 7 - i) * number;
    number = bytes[i] - '0';
  }

  printf("This is the decimal value: %d\n", value);

  exit(0);

}
