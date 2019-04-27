SOURCEDIR = ./source
IDIR = ./include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./source/object
SDIR=./source
BUILDDIR = ./build

_DEPS = Address.h AddressContainer.h AddressList.h AddressConsoleIO.h AddressFileIO.h Quicksort.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Address.o AddressContainer.o AddressList.o AddressConsoleIO.o AddressFileIO.o Quicksort.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILDDIR)/Address: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
