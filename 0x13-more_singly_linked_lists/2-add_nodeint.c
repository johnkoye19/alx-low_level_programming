Write a function that adds a new node at the beginning of a listint_t list.

listint_t *add_nodeint(listint_t **head, const int n)
{
new = malloc(sizeof(listint_t *));
if (new == NULL)
{
return (NULL);
}
new-> next = (*head);
new->n = n;
(*head) = new;
return (new);
}
Return: the address of the new element, or NULL if it failed
