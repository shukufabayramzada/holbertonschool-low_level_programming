#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 *
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	int len;


	if (filename == NULL)
	{
		return (-1);
	}
	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return(1);
}



