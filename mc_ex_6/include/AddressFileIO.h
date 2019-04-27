#ifndef ADDRESSFILEIO_H
#define ADDRESSFILEIO_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "AddressList.h"
#include "AddressConsoleIO.h"

void saveAddressListToFile(AddressList_t **addressList);

AddressList_t* readAddressListFromFile(AddressList_t **currentAddressList);

#endif
