#include <stdlib.h>
#include <stdio.h>

int malloc_counter=0;
int free_counter=0;

void *my_malloc(size_t size){
	printf("++++++++++++MY_MALLOC+++++++++++++++++\n");
	malloc_counter++;
	return malloc(size);
}

void my_free(void *ptr){
	free_counter++;
	free(ptr);
}