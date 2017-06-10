CC=gcc
CFLAGS=-Wall -Werror -g -pg
SOURCES=$(wildcard ls *.c)
OBJ=$(patsubst %.c, %.o, $(SOURCES))

.PHONY: clean

default: 
	make essai_fap

essai_fap: $(OBJ)
	$(CC) $(CFLAGS) --include memory_operations.h  -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

essai_fap.o: fap_bug.o fap.h memory_operations.h
fap_bug.o: fap.h memory_operations.h

clean: 
	rm *.o essai_fap