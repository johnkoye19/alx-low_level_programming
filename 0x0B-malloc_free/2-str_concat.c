#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * str_concat -  function to concatenate two strings.
  * @s1: the first string.
  * @s2: the second string.
  * Return: returns apointer to the concat
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	int a = strlen(s1);
	int b = strlen(s2);
	char *ptr;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	ptr =  (char *)malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < a + b; i++)
	{
		ptr[a + i] = s2[i];
	}
	ptr[a + b] = '\0';
	return (ptr);
}
