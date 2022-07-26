#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* create_array - function that creates  a string and initializes it.
* @size: the number of elements 
* @c: the specific character 
*  Return: a pointer to the memory location. 
*/

char *create_array(unsigned int size, char c)
{
char* ptr = (char*) malloc(sizeof(char) * size);
for (i = 0; i <= size; i++)
{
*(ptr + i) = c;
}
