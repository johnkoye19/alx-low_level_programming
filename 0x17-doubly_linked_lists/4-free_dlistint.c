#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: the pointer to the head of the node
 * Return: returns nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next;

	node = head;

	while (node)
	{
		next = node->next;
		free(node);
		node = next;
	}
}
