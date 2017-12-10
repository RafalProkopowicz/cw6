#include <stdio.h>
#include <stdlib.h>

int *mytab;
int *mytabTemp;

void getInt(int* tab, int liczba) {
  for (size_t i = 0; i < liczba; i++) {
    printf("%d", tab[i]);
  }
}
voi

int main(void){

  mytab = (int*)malloc(5 * sizeof(int));
  mytabTemp = mytab;
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &mytab[i]);
  }

  getInt(mytab, 5);

  mytab = mytabTemp;
  free(mytab);
  return EXIT_SUCCESS;
}
