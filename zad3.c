#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
  int a[5] = {2,2,2,2,2}, b[5] = {2,2,2,2,2};
  int skalar = 0;

  for (size_t i = 0; i < 5; i++) {
    skalar += a[i] * b[i];
  }
  
  printf("%d\n", skalar);
}
