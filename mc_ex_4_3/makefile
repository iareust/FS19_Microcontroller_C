SOURCEDIR = ./source
IDIR = ./include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./source/object
SDIR=./source
BUILDDIR = ./build

_DEPS = ampel.h ampel_cli.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o ampel.o ampel_cli.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILDDIR)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
