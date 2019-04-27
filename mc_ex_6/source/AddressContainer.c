#include "AddressContainer.h"

static void setFirstname(AddressContainer *addressContainerPtr,
  char *firstname){
    addressContainerPtr->firstname = (char*) malloc(strlen(firstname)+1);
    strcpy(addressContainerPtr->firstname, firstname);
  };

static void setLastname(AddressContainer *addressContainerPtr,
  char *lastname){
    addressContainerPtr->lastname =  (char*) malloc(strlen(lastname)+1);
    strcpy(addressContainerPtr->lastname, lastname);
  };

static void setStreetName(AddressContainer *addressContainerPtr,
  char *streetName){
    addressContainerPtr->streetName =  (char*) malloc(strlen(streetName)+1);
    strcpy(addressContainerPtr->streetName, streetName);
  };

static void setStreetNumber(AddressContainer *addressContainerPtr,
  char *streetNumber){
    addressContainerPtr->streetNumber =  (char*) malloc(strlen(streetNumber)+1);
    strcpy(addressContainerPtr->streetNumber, streetNumber);
};

static void setZIP(AddressContainer *addressContainerPtr, char *zip){
  addressContainerPtr->zip =  (char*) malloc(strlen(zip)+1);
  strcpy(addressContainerPtr->zip, zip);
};

static void setCity(AddressContainer *addressContainerPtr,
  char *city){
    addressContainerPtr->city =  (char*) malloc(strlen(city)+1);
    strcpy(addressContainerPtr->city, city);
};

AddressContainer* newAddressContainer(char *firstname,
                                      char *lastname,
                                      char *streetName,
                                      char *streetNumber,
                                      char *zip,
                                      char *city
      ){
        AddressContainer* addressContainer = (AddressContainer*) malloc(sizeof(AddressContainer));
        setFirstname(addressContainer, firstname);
        setLastname(addressContainer, lastname);
        setStreetName(addressContainer, streetName);
        setStreetNumber(addressContainer, streetNumber);
        setZIP(addressContainer, zip);
        setCity(addressContainer, city);

        return addressContainer;
};

void removeAddressContainer(AddressContainer **addressContainer){
  free((*addressContainer)->firstname);
  free((*addressContainer)->lastname);
  free((*addressContainer)->streetName);
  free((*addressContainer)->streetNumber);
  free((*addressContainer)->zip);
  free((*addressContainer)->city);
  free(*addressContainer);
};

        /*
         ## Setter Methods for Address Container
        */
void changeFirstname(AddressContainer *addressContainerPtr,
  char **newFirstname){
    free(addressContainerPtr->firstname);
    setFirstname(addressContainerPtr, *newFirstname);
};

void changeLastname(AddressContainer *addressContainerPtr,
  char **newLastname){
    free(addressContainerPtr->lastname);
    setLastname(addressContainerPtr, *newLastname);
};

void changeStreetName(AddressContainer *addressContainerPtr,
  char **newStreetName){
    free(addressContainerPtr->streetName);
    setStreetName(addressContainerPtr, *newStreetName);
};

void changeStreetnumber(AddressContainer *addressContainerPtr,
  char **newStreetNumber){
    free(addressContainerPtr->streetNumber);
    setStreetNumber(addressContainerPtr, *newStreetNumber);
};

void changeZIP(AddressContainer *addressContainerPtr, char **newZIP){
  free(addressContainerPtr->zip);
  setZIP(addressContainerPtr, *newZIP);
};

void changeCity(AddressContainer *addressContainerPtr, char **newCity){
  free(addressContainerPtr->city);
  setCity(addressContainerPtr, *newCity);
};
