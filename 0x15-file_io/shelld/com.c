//Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.
//prompt
//parsing
//execution
#include  <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void prompt();
void parsing(char *buf, ssize_t bufsize);
int main ()
{
	prompt();

	return (0);
}
//prompt
void prompt()
{
	char *buffer = "$ ";
	int count = 2;
	ssize_t num_read;
	size_t c = 1024;
	char *buf;

//	num_read = getline(&buf, &c, stdin);
	write(STDOUT_FILENO, buffer, count);
	//remember my error
	num_read = getline(&buf, &c, stdin);
	//remember my error
	//calling parsinng
	parsing(buf, num_read);
}
//parsing
void parsing(char *buf, ssize_t bufsize)
{
	char *token;
	char bufcopy[bufsize];
	char delim[] = " \n";
	size_t tok_num = 0;

	strcpy(bufcopy, buf);
	//tokenize to get number.
	token = strtok(bufcopy, delim);
	while (token != NULL)
	{
		tok_num++;
		token = strtok(NULL, delim);
	}
	printf("\n%d", tok_num);
}
