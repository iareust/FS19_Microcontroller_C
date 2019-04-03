#include "matrix.h"


SimpleTwoDimensionalMatrix_type createMatrix(int numberOfRows, int numberOfColums, GENERICTYPE valueToInitialize){

  GENERICTYPE** matrixPointerToReturn = malloc(sizeof(GENERICTYPE*) * numberOfRows);

  for (int i = 0; i < numberOfRows; i++){

    *(matrixPointerToReturn+i) = malloc(sizeof(GENERICTYPE) * numberOfColums);

    for(int j = 0; j < numberOfColums; j++){
      *(*(matrixPointerToReturn+i)+j) = valueToInitialize; // matrixPointerToReturn[i][j]
    }

  }

  SimpleTwoDimensionalMatrix_type simpleTwoDimensionalMatrix;
  simpleTwoDimensionalMatrix.numberOfRows = numberOfRows;
  simpleTwoDimensionalMatrix.numberOfColums = numberOfColums;
  simpleTwoDimensionalMatrix.matrix = matrixPointerToReturn;

  return simpleTwoDimensionalMatrix;

}
