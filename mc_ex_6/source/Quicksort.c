#include "Quicksort.h"

#define NODE AddressListNode_t

/*
static void swapData(NODE **nodeAPtr, NODE **nodeBPtr){
  AddressContainer *tempAddressContrainerPtr = (*nodeAPtr)->addressContainerPtr;
  (*nodeAPtr)->addressContainerPtr = (*nodeBPtr)->addressContainerPtr;
  (*nodeBPtr)->addressContainerPtr = tempAddressContrainerPtr;
};
*/

static NODE* getTail(NODE *currentNode){
  while(currentNode != NULL && currentNode->nextNode != NULL){
    currentNode = currentNode->nextNode;
  }
  return currentNode;
}

static NODE* partition(NODE *oldHead, NODE *oldEnd, NODE **newHead, NODE **newEnd, int comparator(AddressContainer*, AddressContainer*)){
  NODE *pivotNode = oldEnd;
  NODE *previousNode = NULL, *currentNode = oldHead, *tail = pivotNode;

  while(currentNode != pivotNode){
    if (comparator(currentNode->addressContainerPtr, pivotNode->addressContainerPtr) < 0){

      // The first Node that has a value less than the pivot becomes the new head

      if (*newHead == NULL){
        *newHead = currentNode;
      }

      previousNode = currentNode;
      currentNode = currentNode->nextNode;
    }
    else{ // If current Node is greater / equal than pivot

        if (previousNode != NULL){
          previousNode->nextNode = currentNode->nextNode;
        }

        NODE *tempNode = currentNode->nextNode;
        currentNode->nextNode = NULL;
        tail->nextNode = currentNode;
        tail = currentNode;
        currentNode = tempNode;
    }
  }

  if (*newHead == NULL){
    *newHead = pivotNode;
  }

  *newEnd = tail;

  return pivotNode;

}

static NODE* quicksortRecursive(NODE *head, NODE *end, int comparator(AddressContainer*, AddressContainer*)){

  if (!head || head == end){
    return head;
  }

  NODE *newHead = NULL, *newEnd = NULL;

  NODE *pivotNode = partition(head, end, &newHead, &newEnd, comparator);

  if(newHead != pivotNode){

    NODE *tempNode = newHead;
    while(tempNode->nextNode != pivotNode){
      tempNode = tempNode->nextNode;
    }
    tempNode->nextNode = NULL;

    newHead = quicksortRecursive(newHead, tempNode, comparator);

    tempNode = getTail(newHead);
    tempNode->nextNode = pivotNode;
  }

  pivotNode->nextNode = quicksortRecursive(pivotNode->nextNode, newEnd, comparator);

  return newHead;
}

void quicksort(AddressList_t **addressList, int comparator(AddressContainer*, AddressContainer*)){
  (*addressList)->head = quicksortRecursive((*addressList)->head, getTail((*addressList)->head), comparator);
  return;
}


int compareName(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr){
  int compareFirstname = strcmp(firstAddressPtr->firstname, secondAddressPtr->firstname);
  //printf("%s vs. %s - Result: %i\n",firstAddressPtr->firstname, secondAddressPtr->firstname, compareFirstname);
  if(compareFirstname == 0){
    return strcmp(firstAddressPtr->lastname, secondAddressPtr->lastname);
  }else{
    return compareFirstname;
  }
}

int compareStreet(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr){
  int compareStreetname = strcmp(firstAddressPtr->streetName, secondAddressPtr->streetName);
  if(compareStreetname == 0){
    return strcmp(firstAddressPtr->streetNumber, secondAddressPtr->streetNumber);
  }else{
    return compareStreetname;
  }
}

int compareCity(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr){
  return strcmp(firstAddressPtr->city, secondAddressPtr->city);

}

int compareZIP(AddressContainer *firstAddressPtr, AddressContainer *secondAddressPtr){
  return strcmp(firstAddressPtr->zip, secondAddressPtr->zip);
}
