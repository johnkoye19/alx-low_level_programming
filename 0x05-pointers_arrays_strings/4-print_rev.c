#include "main.h"

/**
* print_rev - function to print a string in reverse.
* @s: string to be printed in reverse
* Return: returns no value
*/

void print_rev(char *s)
{
	int a = 0;
	int b;
	
	while (s[a] != '\0')
	{
		a++;
	}
	
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
