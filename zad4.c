#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(char* napis) {
  int length = sizeof(napis)/sizeof(char);
  char b = ' ';


  for (size_t i = 0; i < length; i++) {
    if (napis[i] != ' ' && b == ' ') {
      b = napis[i];
    }
  }
  printf("%c\n", b);

  free(napis);
}
