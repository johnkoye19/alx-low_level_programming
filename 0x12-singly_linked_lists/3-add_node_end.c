#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*Write a function that adds a new node at the end of a list_t list.*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *move, *endnode;
	
	move = (*head);
	endnode = malloc(sizeof(list_t));
	
	if (move == NULL || endnode == NULL)
		return (NULL);
	while (move->next)
	{
		move = move->next;
	}
	move->next = endnode;
	endnode->str = strdup(str);
	endnode->len = strlen(str);
	endnode->next = NULL;
	
	return(endnode);
	
	
}
