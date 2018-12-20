IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = battleships.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_SOBJ = bsexec.o bssktmgr.o bsstatemgr.o 
SOBJ = $(patsubst %,$(ODIR)/%,$(_SOBJ))
_COBJ = bcexec.o bssktmgr.o bsstatemgr.o
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
