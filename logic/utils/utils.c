#include "utils.h"
#include <stdlib.h>
#include <memory.h>


void resize(char ** pointer, int size,int tamanyNou) {
	char * new = (char *) malloc(sizeof(char) * tamanyNou);
	memcpy(new, *pointer, sizeof(char) * size);
	*pointer = new;
}