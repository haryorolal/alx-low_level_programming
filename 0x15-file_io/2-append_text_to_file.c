#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - function that reads a text file and prints it to POSIX
 * @filename: file argument
 * @text_content: content
 * Return: returns 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_append;
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd_append = open(filename, O_WRONLY | O_APPEND);
	if (fd_append == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd_append, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd_append);
			return (-1);
		}
	}
	close(fd_append);
	return (1);
}
