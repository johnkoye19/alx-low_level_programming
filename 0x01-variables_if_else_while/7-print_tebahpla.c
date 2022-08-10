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
	char t;

	for (t = 'z'; t >= 'a'; t--)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
