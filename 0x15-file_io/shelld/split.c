//Write a function that splits a string and returns an array of each word of the string.

//man strtok
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **split(char *buffer);
int main()
{
	size_t size = 1024;
	char *buffer = malloc(sizeof(char) * size);
	//ssize_t num_read;

	if (buffer == NULL)
		return (0);
	printf("$ ");
	//num_read =
	getline(&buffer, &size, stdin);
	split(buffer);
	//printf("%s", buffer);
	free(buffer);
	return (0);

	//getline(&buffer, &size, stdin);

	//return (0);
}

char **split(char *buffer)
{
	/*create an array of strings*/
	int num_tok = 1;
	char *copybuffer;
	char *token;
	char delim[] = " \n";

	strcpy(buffer, copybuffer);
	strtok(buffer, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		num_tok++;
	}
	num_tok;
	return (&copybuffer);
}
