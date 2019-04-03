#ifndef MATRIX_H
#define MATRIX_H

#include <malloc.h>
#define GENERICTYPE char


/* Function declaration*/
typedef struct SimpleTwoDimensionalMatrix_ {
  int numberOfRows;
  int numberOfColums;
  GENERICTYPE** matrix;
} SimpleTwoDimensionalMatrix_type;

/*
  Creates an new two-dimensional matrix with the size and initial value given
  by the Parameters

  Parameters:
  numberOfRows: int: The size of the first Dimention of the matrix
  numberOfColums: int: The size of the second Dimention of the matrix
  valueToInitialize: int: The initial Value for each field in the matrix
*/
SimpleTwoDimensionalMatrix_type createMatrix(int numberOfRows, int numberOfColums, GENERICTYPE valueToInitialize);

#endif
