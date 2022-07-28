#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings.
* @s1: the first string.
* @s2: the second string
* @n: the number of bytes to cop from s2
* Return: returns a pointer to the memory location
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, q;
	unsigned int j = 0;
	char *ptr;

	a = (s1 == NULL) ? 0 : strlen(s1);
	b = (s2 == NULL) ? 0 : strlen(s2);
	if (b <= n)
	{
		n = b;
	}
	q = (a + n + 1);
	ptr = (char *) malloc(sizeof(char) * q);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++, j++)
	{
		*(ptr + j) = s1[i];
	}
	for (i = 0; i < n; i++, j++)
	{
		*(ptr + j) = s2[i];
	}
	*(ptr + q) = '\0';
	return (ptr);
}
