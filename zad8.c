#include <stdio.h>
#include <stdlib.h>

int *mytab;
int *mytabTemp;

void printReverseTable() {
  for (size_t i = 5; i > 0; i--) {
    printf("[%d] ", mytab[i-1]);
  }
}

void printTable() {
  for (size_t i = 0; i < 5; i++) {
    printf("[%d] ", mytab[i]);
  }
}

void getTable() {
  for (size_t i = 0; i < 5; i++) {
    scanf("%d", &mytab[i]);
  }
}

int main(void){

  int n = 0;
  mytab = (int*)malloc(5 * sizeof(int));
  mytabTemp = mytab;
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  getTable();
  printTable();
  putchar('\n');
  printReverseTable();


  mytab = mytabTemp;
  free(mytab);
  return EXIT_SUCCESS;
}
