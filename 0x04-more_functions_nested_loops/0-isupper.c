#include "main.h"
/**
  * _isupper - function to check if a letter is upprecase or not.
  * @c: is the letter to be checked.
  * Return: 1 if uppercase, 0  if otherwise.
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
		return (0);
}
