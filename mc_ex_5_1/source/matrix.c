#include "matrix.h"
#define GENERICTYPE int


GENERICTYPE** createMatrix(int numberOfRows, int numberOfColums, GENERICTYPE valueToInitialize){

  GENERICTYPE** matrixPointerToReturn = malloc(sizeof(GENERICTYPE*) * numberOfRows);

  for (int i = 0; i < numberOfRows; i++){
    *(matrixPointerToReturn+1) = malloc(sizeof(GENERICTYPE) * numberOfColums);
  }

  return matrixPointerToReturn;

}
