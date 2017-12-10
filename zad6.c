#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(void){
  int *mytab;
  int *mytabTemp;
  int n = 0;
  int rozmiar = 10;

  time_t tt;
  int zarodek = time(&tt);
  srand(zarodek);

  mytab = (int*)malloc(rozmiar * sizeof(int));
  mytabTemp = mytab;
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  while(mytab && n < rozmiar){
    printf("%p ",mytab);
    mytab++;
    n++;
  }
  putchar('\n');

  for (size_t i = 0; i < rozmiar; i++) {
    mytab[i] = rand()%rozmiar;
  }

  for (size_t i = 0; i < rozmiar; i++) {
    printf("[%d]", mytab[i]);
  }

  mytab = mytabTemp;
  free(mytab);
  return EXIT_SUCCESS;
}
