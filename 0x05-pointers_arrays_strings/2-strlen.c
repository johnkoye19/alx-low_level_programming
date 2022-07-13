#include "main.h"

/**
  * _strlen - function to find the length  of a string
  * @s: stores the pointer to the string
  * Return:returns the length  of  the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (a >= 0)
	{
		if (s[a] != '\0')
		{
			a++;
		}
		else
		{
			break;
		}
	}
	return (a);
}
