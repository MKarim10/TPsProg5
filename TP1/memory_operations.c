#include "memory_operations.h"
#include <stdlib.h>

void *my_memcpy(void *dst, const void *src, size_t len)
{	
	char* destination = dst;
	const char* source = src;

	while(len>0){
		*(destination) = *(source);
		destination++;
		source++;
		len--;
	}
	return dst;
}

void *my_memmove(void *dst, const void *src, size_t len)
{
  void *resultat = NULL;
  return resultat;
}

int is_little_endian()
{
  int resultat = 0;
  return resultat;
}

int reverse_endianess(int value)
{
  int resultat = 0;
  return resultat;
}
