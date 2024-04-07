#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that appends text at
 * the end of the file
 * @filename: name of the file
 * @text_content: buffer
 * Return: 1 or -1 depends on the case
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
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



