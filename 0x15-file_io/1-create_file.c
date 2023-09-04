#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - function that reads a text file and prints it to POSIX
 * @filename: file argument
 * @text_content: content
 * Return: returns 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd_write;
	int bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd_write = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd_write == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd_write, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd_write);
			return (-1);
		}
	}

	close(fd_write);
	return (1);
}
