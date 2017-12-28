#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
  int i;
//  printf("%d\n", (i < argc-1));
  
  for(i = 1; i < argc; i++)
    printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
  printf("\n");
  exit(0);

}
