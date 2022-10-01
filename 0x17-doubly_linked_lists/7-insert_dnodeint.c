#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a
 * new node at a given position.
 * @h: pointer to the pointer to the head node
 * @idx: the index to add node
 * @n: the data we are adding
 * Return: returns the address to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int num;
	if (h == 0)
		return (0);
	tmp = *h;
	num = 0;
	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (0);
	while (tmp)
	{
		if (num == idx)
		{
			new->n = n;
			new->prev = tmp;
			new->next = tmp->next;
			tmp->next = new;
			(new->next)->prev = new;
			return (new);
		}
		n++;
		tmp = tmp->next;
	}
	return (0);
}
