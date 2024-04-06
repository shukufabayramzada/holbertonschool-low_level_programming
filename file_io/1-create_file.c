#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates file
 * @filename: name of the file
 * @text_content: buffer
 * Return: 1 or -1 depends on the case
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}



