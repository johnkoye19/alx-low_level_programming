char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int a, b, i, q;
	int j = 0;
	char *ptr;
	
	a = (s1 == NULL) ? 0 : strlen(s1);
	b = (s2 == NULL) ? 0 : strlen(s2);
	if (b <= n)
	{
		n = b;
	}
	q = (a + n + 1);
	ptr = (char *) malloc(sizeof(char) * q);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < q; i++, j++)
	{
		*(ptr + j) = s1[i];
	}
	for (i = 0; i < q; i++, j++)
	{
		*(ptr + j) = s2[i];
	}
	*(ptr + q) = '\0';
	return (ptr);
}
