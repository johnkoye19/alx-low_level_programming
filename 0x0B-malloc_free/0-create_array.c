#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* create_array - function that creates  a string and initializes it.
* @size: the number of elements 
* @c: the specific character 
*  Return: a pointer to the memory location. 
*/

char *create_array(unsigned int size, char c)
{
unsigned int  i;
if (size == 0)
{
return (NULL);
}
char* ptr;
ptr = (char*) malloc(size);
for (i = 0; i <= size-1; i++)
{
*(ptr + i) = c;
}
free(ptr);
return (ptr);
}
