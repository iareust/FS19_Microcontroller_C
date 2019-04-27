#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "AddressList.h"
#include "AddressContainer.h"

void quicksort(AddressList_t **addressList, int comparator(AddressContainer*, AddressContainer*));

int compareName(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr);

int compareStreet(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr);

int compareCity(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr);

int compareZIP(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr);

#endif
