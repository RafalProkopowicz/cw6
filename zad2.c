#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int cxtab(int c,int tab){
  return (c * tab);
}

int main() {
  int a[2][2] = {{1,2},{3,4}};
  int c = 3;

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      a[i][j] = cxtab(c , a[i][j]);
    }
  }

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      printf("[%d] ", a[i][j]);
    }
    printf("\n");
  }
}
