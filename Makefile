CC      = gcc
CFLAGS  = -c
LD      = $(CC)
LDFLAGS = -o

all : Mystery.c Mystery

Mystery : Mystery.c
	$(LD) Mystery.c $(LDFLAGS) Mystery

clean:
	rm *.o *~ Mystery