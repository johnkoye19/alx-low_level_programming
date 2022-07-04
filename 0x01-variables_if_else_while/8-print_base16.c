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
	char T;

	for (t = '0'; t <= '9'; t++)
	{
		putchar(t);
	}

	for (T = 'a'; T <= 'f'; T++)
	{
		putchar(T);
	}

	putchar('\n');

	return (0);
}
