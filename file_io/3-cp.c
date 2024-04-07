#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error_exit - print error message and exit
 * @code: exit code
 * @message: message to be printed
 **/
void print_error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main - copy text to file from other file
 * @argc: count of arguments
 * @argv: arguments array
 * Return: Always 0 success.
 **/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to");
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error_exit(98, "Error: Can't read from the file");
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_exit(99, "Error: Can't write to file");
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			print_error_exit(99, "Error: Can't write to the file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_exit(98, "Error: Can't read from the file");
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		print_error_exit(100, "Error: Can't close the file descriptor");
	}
	return (0);
}
