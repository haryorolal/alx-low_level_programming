#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: pointer to a character argument
 * @text_content: content in a file
 * Return: returns 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d_opened_file;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	d_opened_file = open(filename, O_WRONLY | O_APPEND);
	if (d_opened_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(d_opened_file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(d_opened_file);
			return (-1);
		}
	}
	close(d_opened_file);
	return (1);
}
