/* An unprotected primitive to quickly translate a binary byte into a decimal */
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main () {

  char bytes[8];
  printf("Please input string of 8 bytes that you would like to decimate:\n ");
  fgets(bytes,9,stdin);
  int i;
  int position;
  int value = 0;
  int number;
  for(i = 0; i <= 7; i++) {
    position = i + 1;
    number = bytes[i] - '0';
    value = value + pow(2, 7 - i) * number;
    number = bytes[i] - '0';
  }

  printf("This is the decimal value: %d\n", value);

  exit(0);

}
