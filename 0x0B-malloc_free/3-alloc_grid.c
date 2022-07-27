#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
* @width: the width of the array.
* @height: the height of the array.
* Return: returns a pointer to a 2d array.
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	
	ptr = (int *) malloc(sizeof(int *) * width);
	
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int) malloc(sizeof(int) * height);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
