#include "main.h"

/**
* _memset - function that fills memory with a constant byte.
* @s: memory to be filled.
* @b: the constant byte.
* @n: the amount of memeory to be filled.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	
	for (i = 0; i <= 95; i++)
	{
		*(s + i) = b;
	}
	
	return (s);
}
