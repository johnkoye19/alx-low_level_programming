#include "lists.h"
/**
 * sum_dlistint - function that returns the sum
 * of all the data (n) of a dlistint_t linked list.
 * @head: the pointer to the head node
 * Return: returns the sum of the integers
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *move;
	int sum;

	sum = 0;
	move = head;
	while (move)
	{
		sum = sum + move->n;
		move = move->next;
	}
	return (sum);
}
