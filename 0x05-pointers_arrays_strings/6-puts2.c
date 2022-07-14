#include "main.h"
/**
  * puts2 - function to print a string
  * @str: variable that stores the location of the string
  * Return: does not return a value
  */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 != 0)
		{
			a++;
			continue;
		}
		else
		{
			_putchar(str[a]);
			a++;
		}
	}

	_putchar('\n');
}

