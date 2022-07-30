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
	unsigned i;
	
	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	for (i = 0; )
}
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don’t forget to free ptr when it makes sense
FYI: The standard library provides a different function: realloc. Run man realloc to learn more.
