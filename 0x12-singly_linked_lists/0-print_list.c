#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list
* @h: pointer to the structure list_t
* Return: returns the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		nodenum++;
		h = h->next;
	}

	return (nodenum);
}
