#include "main.h"
Create a function that creates a file
int create_file(const char *filename, char *text_content)
{
	int fd, y;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
	{
	fd 
	}
	y = write(fd, text_content, SSIZE_MAX);
	if (y < 0)
		return (-1);
	close(fd);
	return (1);
}
