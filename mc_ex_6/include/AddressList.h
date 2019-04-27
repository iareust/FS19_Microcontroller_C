#ifndef ADDRESSLIST_H
#define ADDRESSLIST_H

#include "AddressContainer.h"


typedef struct AddressListNode {

  AddressContainer *addressContainerPtr;
  struct AddressListNode *nextNode;

} AddressListNode_t;

typedef struct AddressList {

  struct AddressListNode *head;

} AddressList_t;


void push(AddressList_t **addressList, AddressContainer **newAddressContainer);

void printList(AddressList_t **addressList);

AddressList_t* newAddressList(void);

void deleteAddressList(AddressList_t **addressList);

#endif
