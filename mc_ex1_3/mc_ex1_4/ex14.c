/*
	Write a frame for a text based control menu

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void main() {
	char input;
	bool doExit = false;	
	do {
		printf("Test");
		printf("A --> Select Item A\n");
		printf("B --> Select Item B\n");
		printf("C --> Select Item C\n");
		printf("X --> Exit\n\n");
		
		printf("Enter selection: ");
		while (!isalpha(input = toupper(getchar())));

		system("cls");

		switch (input) {
		case 'A': printf("\nSelected A");
			break;
		case 'B': printf("\nSelected B");
			break;
		case 'C': printf("\nSelected C");
			break;
		case 'X': doExit = true;
			break;
		default: printf("\nInvalid selection");
			break;

		}

		printf("\n\n");

	} while (!doExit);
	

}
