
# matrix.c
[![Build Status](https://travis-ci.org/AjayMT/matrix.c.svg)](https://travis-ci.org/AjayMT/matrix.c)

Mutable 2D integer array data type.

```c
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
  ```

## Installation
With [clib](http://github.com/clibs/clib):

```sh
$ clib install AjayMT/matrix.c
```

Or `make` it and use the `matrix.o` file.

## API
### matrix *matrix_new(int cols, int rows)
Returns a pointer to a new matrix with `rows` rows and `cols` columns.

### int matrix_get(matrix *m, int col, int row)
Returns the value in matrix `m` at row `row` and column `col`.

### void matrix_set(matrix *m, int col, int row, int val)
Assigns value `val` at row `row` and column `col` of matrix `m`.

### void matrix_free(matrix *m)
Frees matrix `m`.

## Running tests

```sh
$ make test
```

## License
MIT. See `./LICENSE` for details.
