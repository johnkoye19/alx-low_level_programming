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
	char T;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}

	for (T = 'A'; T <= 'Z'; T++)
	{
		putchar(T);
	}

	putchar('\n');

	return (0);
}
