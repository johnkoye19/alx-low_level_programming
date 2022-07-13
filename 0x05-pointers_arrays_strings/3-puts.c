#include "main.h"
/**
  * _puts - function to print a string
  * @str: variable that stores the location of the string
  * Return: does not return a value
  */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}

