Write a function that prints all the elements of a listint_t list.

size_t print_listint(const listint_t *h)
{
listint_t *move;
move = h;
size_t a = 0;
while (move != NULL)
{
printf("%d", move->n);
move = move->next;
a++;
}
return (a);
}
