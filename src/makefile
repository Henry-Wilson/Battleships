IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = battleships.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_SOBJ = bsexec.o bsktmgr.o bstatemgr.o bmsghdlr.o 
SOBJ = $(patsubst %,$(ODIR)/%,$(_SOBJ))
_COBJ = bcexec.o bsktmgr.o bstatemgr.o bmsghdlr.o bcui.o
COBJ = $(patsubst %,$(ODIR)/%,$(_COBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

bssvr: $(SOBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
bsclnt: $(COBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
