
/*
Exercise 1.1

Write A Program which calculates the factorio of any given integer

(Optional)
Check the input for unvalid values like:
- Numbers with a value less then 0
- Unvalid character

*/
#include <stdio.h>


unsigned long long factorio(int base) {
	unsigned long long result = 1;
	for (int i = base; i > 0; i--) {
		result *= i;
	}

	return result;
}

/*
	Handles the Userinput and checks if input is valid
*/
int _user_input_handler() {
	int user_input;
	do {
		printf("Positive Zahl eingeben: ");
		scanf_s("%i", &user_input);

		if (user_input >= 0)
			break;

		printf("Eingabe war ungueltig\n");		
			
	} while (user_input < 0);

	return user_input;

}

void main() {
	int input;
	unsigned long long result;

	input = _user_input_handler();
	result = factorio(input);

	printf("Resultat: %llu \n\n", result);

	
	system("pause");
}