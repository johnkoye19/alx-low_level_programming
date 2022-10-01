#include "lists.h"
/**
 * delend - delete if index is at the end
 * @new: the pointer to the last node
 * Return: returns an integer.
 */

int delend(dlistint_t *new);
/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: pointer to the pointer to head
 * @index: the node we want deleted
 * Return: returns 1(success) or -1(failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *new = *head;
	unsigned int num = 0, nnode = 0;

	if (head == 0 || *head == 0)
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
	if (index == nnode - 1)
		delend(new);
	if (index == 0)
	{
		*head = tmp->next;
		tmp->next->prev = 0;
		free(tmp);
		return (1);
	}
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

/**
 * delend - delete if index is at the end
 * @new: the pointer to the last node
 * Return: returns an integer.
 */

int delend(dlistint_t *new)
{
	new->prev->next = 0;
	free(new);
	return (1);
}
