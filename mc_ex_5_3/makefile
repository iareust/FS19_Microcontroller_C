SOURCEDIR = ./source
IDIR = ./include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./source/object
SDIR=./source
BUILDDIR = ./build

EXT_DEP = pthread

_DEPS = ampel.h ampel_cli.h ampel_thread.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o ampel.o ampel_cli.o ampel_thread.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILDDIR)/main: $(OBJ)
	$(CC) -$(EXT_DEP) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
