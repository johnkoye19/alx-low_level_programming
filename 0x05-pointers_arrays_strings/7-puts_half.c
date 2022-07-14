#include "main.h"
/**
  * puts_half - function to print a string
  * @str: variable that stores the location of the string
  * Return: does not return a value
  */

void puts_half(char *str)
{
	int a = 0;
	int length_of_the_string;
	int n;

	while (str[a] != '\0')
	{
		a++;
	}
	
	length_of_the_string = a;
	n = (length_of_the_string - 1) / 2;
	
	if (length_of_the_string % 2 == 0)
		{
			for (i = a / 2; i <= a - 1; i++)
			{
				_putchar(str[i]);
			}
		}
	else
		{
			for (i = n + 1; i <= a - 1; i++)
			{
				_putchar(str[i]);
			}
		}

	_putchar('\n');
}
