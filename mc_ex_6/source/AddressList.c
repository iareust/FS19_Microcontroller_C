#include "AddressList.h"



static AddressListNode_t* newAddressNode(AddressListNode_t **nextNode, AddressContainer **addressContainer){

  AddressListNode_t *newNode = malloc(sizeof(AddressListNode_t));
  newNode->nextNode = (*nextNode);
  newNode->addressContainerPtr = (*addressContainer);

  return newNode;
};

void push(AddressList_t **addressList, AddressContainer **addressContainer){

  AddressListNode_t *oldHead = (*addressList)->head; // Save the pointer to Old Head in Var
  (*addressList)->head = newAddressNode(&oldHead, addressContainer); // Create a new Node and save the Pointer to the Node as new Head
};

AddressList_t* newAddressList(void){

  AddressList_t *addressList = (AddressList_t*) malloc(sizeof(AddressList_t));
  addressList->head = NULL;

  return addressList;
};

void deleteAddressList(AddressList_t **addressList){

  AddressListNode_t *tempNode;
  AddressListNode_t *nextNode = (*addressList)->head;

  while(nextNode){
    AddressContainer *addrPtr = nextNode->addressContainerPtr;
    removeAddressContainer(&addrPtr);
    tempNode = nextNode;
    nextNode = nextNode->nextNode;
    free(tempNode);
  }

  free(*addressList);
};
