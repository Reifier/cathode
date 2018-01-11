#include <stdio.h>

int main(void) {

  int current_char;
  int previous_char;
  
  while((current_char = getchar()) != EOF) {
    if (previous_char == ' ' && current_char == ' ') {
      ;
    } else {
      putchar(current_char);
      previous_char = current_char;
    }
  }
}
