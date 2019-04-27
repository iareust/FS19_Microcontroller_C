#include "matrix.h"
#include "preassure_type.h"
#include <stdio.h>

static const char* preassureTypeDescription[] = {"Mega", "Kilo", "Zero", "Milli", "Micro"};

void printMatrixFromMatrixPointer(const SimpleTwoDimensionalMatrix_type matrixToPrint){

  for (int i = 0; i < matrixToPrint.numberOfRows; i++){

    for (int j = 0; j < matrixToPrint.numberOfColums; j++){
      PressureMeasurements_type preassureData = *(*(matrixToPrint.matrix+i)+j);

      const char *description = preassureTypeDescription[preassureData.entity];
      float valueToReturn = preassureData.value;

      printf("%1.1f %s \t", valueToReturn, description);
    }
      printf("\n");
  }

}

int main(void){
  PressureMeasurements_type initValue;
  initValue.value = 0.0;
  initValue.entity = KILO;
  SimpleTwoDimensionalMatrix_type matrix = createMatrix(20,5, initValue);
  printMatrixFromMatrixPointer(matrix);
}
