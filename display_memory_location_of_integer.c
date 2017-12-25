#include <stdlib.h>
#include <stdio.h>

int main()
{
  int number = 1;
  printf("This is the actual integer: %d\n", number);
  printf("This is the memory location: %p\n", &number);
  return 0;
}
