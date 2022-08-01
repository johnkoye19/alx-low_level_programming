#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, int *argv[])
{
	int i, j;
	
	if (argc > 3)
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
	}
	convert(*argv[1], *argv[2]);
	return (0);
}

int convert(char s1[], char s2[])  
{
	int num = 0;
	int answer;
	int num2 = 0;
	int n = strlen(s1);
	int n2 = strlen(s2);
	int i, rem, len = 0, n, m;
	char str[];
	
	for (int i = 0; i < n; i++)
	{
		num = num * 10 + (s1[i] - 48);
	}
	for (int i = 0; i < n; i++)
	{
		num2 = num2 * 10 + (s2[i] - 48);
	}
	answer = mult(int num, int num2);
	
	n = answer;
	while (n != 0)
	{
        	len++;
        	n /= 10;
    	}
    	for (i = 0; i < len; i++)
    	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
    	}
	str[len] = '\0';
	
	for (m = 0; m < len; m++)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
	return(0);
}
int mult(int a, int b)
{
	return(a * b);
}
