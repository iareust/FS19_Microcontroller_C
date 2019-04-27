#include <stdio.h>


void createTable(int fieldWidth, int numberOfRows, int numberOfColums){

  for (size_t i = 0; i < numberOfRows; i++) {

    for (size_t j = 0; j < numberOfColums; j++) {

      printf("%*d.%-*d", fieldWidth/2, i, fieldWidth/2, j);
      /* code */
    }
    printf("\n");
  }

}

int main(void){

  int value = 26;


  printf("\n\n%d, %o, %x \n", value, value, value);

  float valueF = 1000.345;

  printf("%-10.2f %e", valueF, valueF);

  printf("\n");

  createTable(6, 40, 6);

}
