#include "matrix.h"


SimpleTwoDimensionalMatrix_type createMatrix(int numberOfRows, int numberOfColums, PressureMeasurements_type valueToInitialize){

  GENERICTYPE** matrixPointerToReturn = (GENERICTYPE ** ) malloc( sizeof(GENERICTYPE*) * numberOfRows);

  for (int i = 0; i < numberOfRows; i++){

    *(matrixPointerToReturn+i) = (GENERICTYPE * ) malloc(sizeof(GENERICTYPE) * numberOfColums);

    for(int j = 0; j < numberOfColums; j++){
      PressureMeasurements_type valueToSet = valueToInitialize;
      valueToSet.value += (i*1.0)+(j*0.1);
      *(*(matrixPointerToReturn+i)+j) = valueToSet; // matrixPointerToReturn[i][j]
    }

  }

  SimpleTwoDimensionalMatrix_type simpleTwoDimensionalMatrix;
  simpleTwoDimensionalMatrix.numberOfRows = numberOfRows;
  simpleTwoDimensionalMatrix.numberOfColums = numberOfColums;
  simpleTwoDimensionalMatrix.matrix = matrixPointerToReturn;

  return simpleTwoDimensionalMatrix;

}
