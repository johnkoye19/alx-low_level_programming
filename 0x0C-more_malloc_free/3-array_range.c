Write a function that creates an array of integers.

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
		
	for (i = min; i <= max; i++)
	{
		num++;
	}
	ptr = (int *) malloc(sizeof(int) * num);
	
	if (ptr == NULL)
	{
		return (ptr);
	}
	for (i = min; i <= max; i++; j++)
	{
		ptr[j] = i;
	}
}
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL
