#include "lists.h"
/**
 * * print_dlistint - function prints all elements of dlistint_t list.
 * @h: the node head pointer
 * Return: returns the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/**
	 * * read through the list
	 * then print thedata
	 * then count
	 */
	int num = 0;
	const dlistint_t *tmp = h;

	if (h == 0)
		return (num);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		num = num + 1;
		tmp = tmp->next;
	}
	return (num);
}
