#include <string.h>
#include <stdio.h>
#include <stdlib>
#include "main.h"

int main(int argc, int *argv[])
{
	If (argc > 3)
	{
		_putchar(E);
		_putchar(r);
		_putchar(r);
		_putchar(o);
		_putchar(r);
		_putchar('\n');
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		for(j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				_putchar(E);
				_putchar(r);
				_putchar(r);
				_putchar(o);
				_putchar(r);
				_putchar('\n');
				exit(98);
			}
		}
	mult(*argv[1], *argv[2]);
	return (0);
}

int convert(char s1[], char s2[])  
{
	int num = 0;
	int num2 = 0;
	int n = strlen(s1);
	int n2 = strlen(s2); 
	
	for (int i = 0; i < n; i++)
	{
		num = num * 10 + (s1[i] - 48);
	}
	for (int i = 0; i < n; i++)
	{
		num2 = num2 * 10 + (s2[i] - 48);
	}
	answer = mult(int num, int num2);
	
}
int mult(int a, int b)
{
return(a * b);
}
