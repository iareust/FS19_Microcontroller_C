#ifndef MATRIX_H
#define MATRIX_H

#include <malloc.h>

/*
  Creates an new two-dimentional matrix with the size and initial value given
  by the Parameters

  Parameters:
  numberOfRows: int: The size of the first Dimention of the matrix
  numberOfColums: int: The size of the second Dimention of the matrix
  valueToInitialize: int: The initial Value for each field in the matrix
*/
int** createMatrix(int numberOfRows, int numberOfColums, int valueToInitialize);

#endif
