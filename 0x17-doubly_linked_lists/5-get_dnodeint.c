#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: the pointer to the head node
 * @index: the nth node
 * Return: returns the pointer to nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*read through the list*/
	/*stop at nth starting from zero*/
	dlistint_t *move;
	unsigned int n;

	move = head;
	n = 0;
	while (move)
	{
		if (n == index)
			return (move);
		move = move->next;
		n++;
	}
	return (0);
}
