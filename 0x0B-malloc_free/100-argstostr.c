#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* argstostr - function that concatenates all the arguments of your program.
* @ac:
* @av:
* Return: returns a pointer to a new string.
*/

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int j;
	int n = 1;
	
	for (i = 0; i < ac; i++)
	{
		length += _strlen(av[i]);
	}
	/* allocate space for the new string */
	str = malloc(sizeof(char) * (length + ac + 1));
	return (ptr);
}
