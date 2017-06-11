#include <stdio.h>
#include <stdlib.h>
#include "bit_operations.h"

int get_bit(int toto, int i){
	return (toto >> i) & 1;
}

int set_bit(int toto, int nombre){
	return toto | (1 << nombre);
}

int clr_bit(int toto, int nombre){
	return toto & ~ (1 << nombre);
}