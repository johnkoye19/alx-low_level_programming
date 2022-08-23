#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a number of characters and prints
 * @filename: the name of the file we are reading
 * @letters: thenum of char to read
 * Return: returns the num of char the program prints
 * */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t charnum, wnum;
	int fd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	fd = open("filename", O_RDONLY);
	if (fd == -1)
		return (0);
	if (!buffer)
		return (0);
	charnum = read(fd, buffer, letters);
	if (charnum < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters + 1] = '\0';
	wnum = write(STDOUT_FILENO, buffer, charnum);
	close(fd);
	if (filename == NULL)
		return (0);
	if (wnum < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (charnum);
}
