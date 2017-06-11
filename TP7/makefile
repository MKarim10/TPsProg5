CC=gcc
CFLAGS=-Wall -Werror
SOURCES=$(wildcard ls *.c)
OBJ=$(patsubst %.c, %.o, $(SOURCES))

.PHONY: clean

essai_fap: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

essai_fap.o: fap.h
fap.o: fap.h

clean: 
	rm $(OBJ) essai_fap