#ifndef ADDRESSCONTAINER_H
#define ADDRESSCONTAINER_H

#include <malloc.h>
#include <string.h>

typedef enum Countrys{
  Switzerland,
  Germany,
  UnitedStates
} Countrys;

typedef struct AddressContainer {
  char* firstname;
  char* lastname;
  char* streetName;
  char* streetNumber;
  char* zip;
  char* city;
  // Countrys country;

} AddressContainer;

AddressContainer* newAddressContainer(char *firstname,
                                      char *lastname,
                                      char *streetName,
                                      char *streetNumber,
                                      char *zip,
                                      char *city
      );

void removeAddressContainer(AddressContainer **addressContainer);

void changeFirstname(AddressContainer *addressContainerPtr, char **newFirstname);

void changeLastname(AddressContainer *addressContainerPtr, char **newLastname);

void changeStreetName(AddressContainer *addressContainerPtr, char **newStreetName);

void changeStreetnumber(AddressContainer* addressContainerPtr, char **newStreetNumber);

void changeZIP(AddressContainer *addressContainerPtr, char **newZIP);

void changeCity(AddressContainer *addressContainerPtr, char **newCity);

#endif
