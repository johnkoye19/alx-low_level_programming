#include "main.h"
/**
* more_numbers - function to print numbers 0 to 9 not 2 and 4
* Return: void
*/

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; c++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
