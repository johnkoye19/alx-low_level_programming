#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int t;

	for (t = 0; t < 90; t++)
	{
		for ()
		{
			putchar((t / 10) + '0');
			putchar((t % 10) + '0');
		}
		if (t != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
