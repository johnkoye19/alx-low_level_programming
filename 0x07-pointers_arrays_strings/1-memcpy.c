#include "main.h"
/**
* _memcpy -  function that copies memory area.
* @dest: the memory area which an amount of bytes is to be copied to.
* @src: the memory area to be copied from.
* @n: the amount of bytess to be copied to dest.
* Return: returns dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	usigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(s + i) = *(src + i);
	}
	
	return (dest);
}
