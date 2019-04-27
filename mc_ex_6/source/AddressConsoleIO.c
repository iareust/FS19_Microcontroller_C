#include "AddressConsoleIO.h"

void newAddress(AddressList_t **addressList){

  AddressContainer *address;
  char firstname[30], lastname[30], streetName[50], streetNumber[6], zip[13], city[30];

  printf("Firstname: ");
  scanf("%s", firstname);

  printf("Lastname: ");
  scanf("%s", lastname);

  printf("Street: ");
  scanf("%s", streetName);

  printf("Nr: ");
  scanf("%s", streetNumber);

  printf("\rZIP: ");
  scanf("%s", zip);

  printf("City: ");
  scanf("\n%[^\n]", city);

  address = newAddressContainer(firstname, lastname, streetName, streetNumber, zip, city);
  push(addressList, &address);
};

void listAddress(AddressList_t **addressList){
  AddressListNode_t *nextNode = (*addressList)->head;

  while(nextNode){
    AddressContainer *addrPtr = nextNode->addressContainerPtr;
    printf("%s %s \n%s %s\n%s, %s\n\n", addrPtr->firstname,
                                             addrPtr->lastname,
                                             addrPtr->streetName,
                                             addrPtr->streetNumber,
                                             addrPtr->city,
                                             addrPtr->zip
                                           );
    nextNode = nextNode->nextNode;
  }
};

void clearScreen(void){
  printf("\033c");
}
