CC=gcc
CFLAGS=-Wall -Werror
SOURCES=$(wildcard ls *c)
OBJ=$(patsubst %c, %o, $(SOURCES))

.PHONY: clean

bitabit: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

bitabit.o: bit_operations.h
bit_operations.o: bit_operations.h

clean:
	rm $(OBJ) bitabit
