#include "main.h"
#include <stddef.h>
/**
* _strchr - function that locates a character in a string.
* @s: string to be checked out.
* @c: the character we are searching for in s.
* Return: Returns a ptr to the 1st occurrence of char c in s, or NULL if not.
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
	{
		i++;
	}

	for (a = 0; a < i; a++)
	{
		if (c == s[i])
		{
			s = s + a;
			return (s);
		}
	}

	return ('\0');
}
