void free_list(list_t *head)
{
	list_t move;
	while (move)
	{
		move = head;
		free(head);
		move = move->next;
	}
}
