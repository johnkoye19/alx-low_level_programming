#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _calloc - function that allocates memory for an array, using malloc.
* @nmemb: the number of elements.
* @size: the size of one element.
* Return: returns a pointer to the array.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
