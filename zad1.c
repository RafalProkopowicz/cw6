#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  int a[2][2] = {{1,2},{3,4}}, b[2][2] = {{5,6},{7,8}}, c[2][2] = {{0,0},{0,0}};

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < 2; j++) {
      printf("[%d] ", c[i][j]);
    }
    printf("\n");
  }
}
