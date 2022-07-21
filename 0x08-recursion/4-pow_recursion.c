#include "main.h"

/**
* _pow_recursion - funct that returns value of x raised to the power of y.
* @x: the base of the power y.
* @y: the power.
* Return: returns an integer.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
