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
		for (j = 0; j < (int)strlen(av[i]);  j++)
		{
			ptr = (char *) malloc(sizeof(char) * n++);
		}
		ptr = (char *) malloc(sizeof(char));
	}
	return (ptr);
}
