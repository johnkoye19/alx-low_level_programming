#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: pointer to the pointer to head
 * @index: the node we want deleted
 * Return: returns 1(success) or -1(failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *new;
	unsigned int num, nnode = 0;

	num = 0;
	tmp = *head;
	new = *head;
	if (head == 0)
		return (-1);
	while (new)
	{
		new = new->next;
		nnode++;
	}
	if (nnode == 1 && index == 0)
	{
		*head = 0;
		free(tmp);
		return (1);
	}
	if (head == 0)
		return (-1);
	if (nnode == 0)
	       return (-1);	
	if (index == nnode - 1)
	{
		new->prev->next = 0;
		free(new);
		return (1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		tmp->next->prev = 0;
		free(tmp);
		return (1);
	}
	/*read through*/
	if (head == 0)
		return (-1);
	while (tmp)
	{
		if (num == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		num = num + 1;
	}
	return (-1);
}
