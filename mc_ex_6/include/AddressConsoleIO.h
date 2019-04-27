#ifndef ADDRESSCONSOLEIO_H
#define ADDRESSCONSOLEIO_H

#include <stdio.h>
#include "AddressList.h"
#include "AddressContainer.h"

void newAddress(AddressList_t **addressList);

void listAddress(AddressList_t **addressList);

void clearScreen(void);

#endif
