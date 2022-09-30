#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at
 * the end of a dlistint_t list.
 * @head: pointer to the pointer to the head node
 * @n: the new node element
 * Return: returns the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *end;

	if ((*head) == 0)
	{
		end = malloc(sizeof(dlistint_t));
		if (end == 0)
			return (0);
		end->n = n;
		end->next = 0;
		end->prev = 0;
		*head = end;
		return (end);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	end = malloc(sizeof(dlistint_t));
	if (end == 0)
		return (0);
	tmp->next = end;
	end->n = n;
	end->next = 0;
	end->prev = tmp;
	return (end);
}
