#include "main.h"
/**
* _puts_recursion -  a function that prints a string.
* @s: the string we are working with 
* Return: returns void.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	
	_putchar(*s);
	_puts_recursion(s++);
}
