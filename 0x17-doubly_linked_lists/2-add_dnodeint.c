#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: pointer to pointer of head node
 * @n: the data of the new node
 * Return: returns address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* check if h is null */
	if ((*head) == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == 0)
			return (0);
		new->n = n;
		new->prev = 0;
		new->next = 0;
		*head = new;
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (0);
	new->n = n;
	new->prev = 0;
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (new);
	/* then craete node */
	/* return new node */
}
