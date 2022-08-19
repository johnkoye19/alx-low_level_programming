#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bin = 0;
	unsigned long int rem, i = 1;
	unsigned int a = 0;
	int *p = NULL;
	
	while (n!=0)
	{
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}
	while (bin != 0)
	{
		*(p + a) = bin % 10;
		bin = bin / 10;
		a++;
	}
	if (index < a)
		return (*(p + index));
	else
		return (-1);
}
