#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strdup - function that duplicates a string.
* @str: pointer to the string to be duplicated.
* Return: a pointer to the duplicate memory location.
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr = (char *) malloc(strlen(str));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}
