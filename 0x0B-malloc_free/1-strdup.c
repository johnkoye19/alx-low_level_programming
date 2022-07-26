#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strdup - function that duplicates a string.
* @str: pointer to the string to be duplicated.
* Return: a pointer to the duplicate memory location. 
*/
char *_strdup(char *str)
{
unsigned int i;
char* ptr = (char*) malloc(sizeof(*str));
if (
for (i = 0; i < sizeof(*str)/sizeof(str[0]); i++)
{
*(ptr + i) = str(i);
}
return (ptr);
}
