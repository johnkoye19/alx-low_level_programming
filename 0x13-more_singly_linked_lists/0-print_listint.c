Write a function that prints all the elements of a listint_t list.

size_t print_listint(const listint_t *h)
{
listint_t *move;
move = h;
while (move != NULL)
}
Return: the number of nodes
Format: see example
You are allowed to use printf
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
