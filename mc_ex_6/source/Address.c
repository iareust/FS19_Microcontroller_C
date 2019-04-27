#include "Address.h"

AddressList_t *addressList;

int main(int argc, char** argv)
{
  addressList = newAddressList();

  char c;
  clearScreen();

  do {
    
    printf("\n");
    printf("N --> New address\n");
    printf("L --> List addresses\n");
    printf("R --> Read addresses from file\n");
    printf("S --> Save addresses to file\n");
    printf("1 --> Sort list by name\n");
    printf("2 --> Sort list by street\n");
    printf("3 --> Sort list by city\n");
    printf("4 --> Sort list by ZIP\n");
    printf("Q --> Quit\n\n");
    while (!isalnum(c = getchar()));   // read as long number or letter
    c = toupper(c);

    clearScreen();

    switch (c){
      case 'N': newAddress(&addressList); break;
      case 'L': listAddress(&addressList); break;
      case 'R': addressList = readAddressListFromFile(&addressList); break;
      case 'S': saveAddressListToFile(&addressList); break;
      case '1': quicksort(&addressList, compareName); break;
      case '2': quicksort(&addressList, compareStreet); break;
      case '3': quicksort(&addressList, compareCity); break;
      case '4': quicksort(&addressList, compareZIP); break;
    };

  } while (c != 'Q');

  return (EXIT_SUCCESS);
}
