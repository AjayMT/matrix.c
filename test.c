
// test.c

#include <stdio.h>

#include "matrix.h"

int main (int argc, char *argv[])
{
  matrix *m = matrix_new(3, 3);

  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      matrix_set(m, i, j, i * j);

  for (int k = 0; k < 3; k++) {
    for (int l = 0; l < 3; l++)
      printf("%d ", matrix_get(m, k, l));

    printf("\n");
  }

  matrix_free(m);

  return 0;
}
