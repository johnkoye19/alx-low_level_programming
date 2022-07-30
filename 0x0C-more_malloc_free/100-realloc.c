/**
* _realloc - function that reallocates a memory block using malloc and free
* @ptr: the pointer to the old location.
* @old_size: the old size
* @new_size: the new size
* Return: returns a pointer to the location
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int index;
	
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	for (index = 0; index < old_size && index < new_size; index++)
	{
		p[index] = ptr[index];
	}
	free(ptr);
	return (p);
}
