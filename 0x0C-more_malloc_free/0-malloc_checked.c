#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - that allocates memory with malloc.
* @b: the amount of bytes in memory to create.
* Return: returs a pointer to the memory area.
*/
void *malloc_checked(unsigned int b)
{
	void*ptr;

	ptr = malloc (b);
	if ( ptr == NULL)
	{
		exit(98);
	}
	return(ptr);
}
