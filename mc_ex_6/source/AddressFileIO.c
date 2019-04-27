#include "AddressFileIO.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[0;31m"

void saveAddressListToFile(AddressList_t **addressList){

  char fileName[30];
  printf("Filename: ");

  scanf("%s", fileName);

  char c='Y';

  if ( access(fileName, F_OK) != -1){

    printf("File %s already exists. Do you want to continue" KRED "Y/N (File will be deleted!)\n" KNRM, fileName);
    c='N';
    while (!isalnum(c = getchar()));   // read as long number or letter
    c = toupper(c);

  }

  if (c == 'Y'){
    // Open File and delete content
    FILE* file  = fopen(fileName,  "w");

    AddressListNode_t *nextNode = (*addressList)->head;

    while(nextNode){
      AddressContainer *addrPtr = nextNode->addressContainerPtr;
      fprintf(file, "%s,%s,%s,%s,%s,%s;\n", addrPtr->firstname,
                                               addrPtr->lastname,
                                               addrPtr->streetName,
                                               addrPtr->streetNumber,
                                               addrPtr->city,
                                               addrPtr->zip
                                             );
      nextNode = nextNode->nextNode;
    }

    clearScreen();
    fclose(file);

  }


};

AddressList_t* readAddressListFromFile(AddressList_t **currentAddressList){

  char fileName[30];
  printf("Filename: ");

  scanf("%s", fileName);

  if ( access(fileName, F_OK) == -1){

    printf(KRED "%s does not exist." KNRM, fileName);
    return *currentAddressList;

  }else{

    FILE *file = fopen (fileName, "r");
    AddressList_t *addressList = newAddressList();

    AddressContainer *address;
    deleteAddressList(currentAddressList);

    int numberOfReads;
    char firstname[30], lastname[30], streetName[50], streetNumber[6], zip[13], city[30];

    do{

      numberOfReads = fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", firstname,
                                        lastname,
                                        streetName,
                                        streetNumber,
                                        city,
                                        zip);
      if(numberOfReads > 0){
        address = newAddressContainer(firstname, lastname, streetName, streetNumber, zip, city);
        push(&addressList, &address);
      }


    }while(numberOfReads > 0);

    fclose(file);
    return addressList;

  }

};
