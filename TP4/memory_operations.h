#include <sys/types.h>

extern int malloc_counter;
extern int free_counter;

#define malloc my_malloc
#define free my_free

