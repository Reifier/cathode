#include <stdio.h>

#define IN 0
#define OUT 1

int main(void) {

  int nchar, c, largest;
  int nletters[10];

  largest = 0;

  for (int a = 0; a < 10; ++a)
    nletters[a] = 0;

  for (int i = 0; i < 10; ++i) {
    printf("Please enter a word here: ");
    nchar = 0;
    while((c = getchar()) != '\n') {
      ++nchar;
    }
    nletters[i] = nchar;
    if (nchar > largest)
      largest = nchar;
  }

  int spaces;
  for (int i = 0; i < 10; ++i) {
    printf("[");
    spaces = largest - nletters[i];
    for (;nletters[i] != 0; --nletters[i])
      printf("|");
    for (int s = 0; s < spaces; ++s)
      printf(" ");
    printf("]\n");
  }
}

