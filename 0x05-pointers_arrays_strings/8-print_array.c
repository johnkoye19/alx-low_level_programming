#include "main.h"
/**
* print_array - function to print n elements of an array
* @a: array to be worked on
* @n: number of elements to print
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
}
