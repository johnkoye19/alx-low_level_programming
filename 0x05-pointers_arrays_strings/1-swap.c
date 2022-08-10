#include "main.h"

/**
  * swap_int - funtion to swap  the values of two variables
  * @a: first pointer
  * @b: second pointer
  */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
