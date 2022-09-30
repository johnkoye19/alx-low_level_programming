#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: the head node pointer
 * Return: return the num of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num = 0;

	if (h == 0)
		return (num);
	while (temp)
	{
		num = num + 1;
		temp = temp->next;
	}
	return (num);
}
