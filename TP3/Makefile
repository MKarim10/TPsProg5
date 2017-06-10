CC=gcc
CFLAGS=-Wall -Werror
SOURCES=$(wildcard *.c)
DEPS=$(patsubst %.c, %.dep, $(SOURCES))
OBJ=$(patsubst %.c, %.o, $(SOURCES))

.PHONY: clean

all: default clean

default:
	@echo Tapez l\'une des commandes suivantes:
	@echo make clean
	@echo make essai_pile

essai_pile: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

-include $(DEPS)

%.dep: %.c
	gcc -MM $< >$@

clean:
	rm *.o *.dep essai_pile



