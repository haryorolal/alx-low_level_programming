#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: pointer to a character argument
 * @letters: numbers of char in filename
 * Return: returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t d_opened_file, byte_read, byte_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	d_opened_file = open(filename, O_RDONLY);
	if (d_opened_file == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(d_opened_file);
		return (0);
	}

	byte_read = read(d_opened_file, buffer, letters);
	if (byte_read == -1)
	{
		close(d_opened_file);
		free(buffer);
		return (0);
	}
	buffer[byte_read] = '\0';
	byte_written = write(STDOUT_FILENO, buffer, byte_read);
	if (byte_written == -1 || byte_written != byte_read)
	{
		close(d_opened_file);
		return (0);
	}
	close(d_opened_file);
	free(buffer);
	return (byte_written);
}
