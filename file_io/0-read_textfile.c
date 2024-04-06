#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file name
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *m = malloc(letters);
	int file_des;
	int count;

	if (filename == NULL || m == NULL)
	{
		return (0);
	}
	file_des = open(filename, O_RDONLY);
	count = read(file_des, m, letters);
	if (count == -1)
	{
		return (0);
	}
	if (write(STDOUT_FILENO, m, count) == -1)
	{
		return (0);
	}
	close(file_des);
	return (count);
}
