#include "matrix.h"
#include <stdio.h>


void printMatrixFromMatrixPointer(SimpleTwoDimensionalMatrix_type matrixToPrint){

  for (int i = 0; i < matrixToPrint.numberOfRows; i++){

    for (int j = 0; j < matrixToPrint.numberOfColums; j++){
      GENERICTYPE value = *(*(matrixToPrint.matrix+i)+j);
      printf("%i ", value);
    }
      printf("\n");
  }

}

int main(void){
  SimpleTwoDimensionalMatrix_type matrix = createMatrix(100,50, *("c"));
  printMatrixFromMatrixPointer(matrix);
}
