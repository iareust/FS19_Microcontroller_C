#include <stdio.h>
#include <stdlib.h>

/*
Write a Program which prints a 32-bit Integer number in a binary notation

#Example:
The value  12 will be:	0000 0000 0000 0000 0000 0000 0000 1100
The value -13 will be:	1111 1111 1111 1111 1111 1111 1111 0011

*/

void showbits(int value) {

	for (int i = (sizeof(value) * 8) - 1; i >= 0; i--) {
		//Masks the n-th bit and compars (? :) whether 1 or 0
		(value & (1U << i)) ? putchar('1') : putchar('0');

		if (i % 4 == 0){
			printf(" ");
		}
	}
	
	printf("\n");
}

void main() {

	long input;
	int MASK = 1;
	char user_input;

	do {
		printf("Input a integer value: ");
		scanf("%d", &input);
		showbits(input);

		printf("\nWould you like to enter another Number: ");
		while (!isalpha(user_input = getchar()));
		system("cls");

	}while(user_input == 'y');

	
}
