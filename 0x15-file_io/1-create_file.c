#include "main.h"
/**
 * _strlen - function to calculate leng of string
 * @str: pointer to a character
 * Return: return count
 */
int _strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * create_file - function that creates a file
 * @filename: pointer to a character argument
 * @text_content: content in a file
 * Return: returns 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int d_opened_file;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	d_opened_file = open(filename, O_CREAT | O_WRONLY |  O_TRUNC, 0600);
	if (d_opened_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(d_opened_file, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(d_opened_file);
			return (-1);
		}
	}

	close(d_opened_file);
	return (1);
}
