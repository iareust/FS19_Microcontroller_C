SOURCEDIR = ./source
IDIR = ./include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=./source/object
SDIR=./source
BUILDDIR = ./build

_DEPS = matrix.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o matrix.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BUILDDIR)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
