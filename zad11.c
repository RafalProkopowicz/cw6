#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *mytab;
int *mytabTemp;
int a = 0, length = 0;

void getTab(int liczba) {

  int  n = 0, temp = 0,temp2 = 0;
  length = 1 + (int)log10(liczba);

  printf("%d\n", length);

  mytab = (int*)malloc(length * sizeof(int));
  mytabTemp = mytab;
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  temp = liczba;
  temp2 = liczba;
  for (size_t i = 0; i < length; i++) {
    int dzielnik = ((int)log10(temp) * 10);
    mytab[i] = temp / dzielnik;
    temp2 = temp%dzielnik;
  }

}

int main(void){
  scanf("%d", &a);

  getTab(a);

  for (size_t i = 0; i < length; i++) {
    printf("[%d] ", mytab[i]);
  }

  printf("\n");
  mytab = mytabTemp;
  free(mytab);
  return EXIT_SUCCESS;
}
