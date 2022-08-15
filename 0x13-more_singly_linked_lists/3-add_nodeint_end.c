Write a function that adds a new node at the end of a listint_t list.

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *end;
	
end = malloc(sizeof(listint_t *));
if (end == NULL)
return(NULL);
if ((*head) == NULL)
{
(*head) = end;
return (end);
}
} 
Return: the address of the new element, or NULL if it failed
