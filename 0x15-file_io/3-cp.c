#include "main.h"
/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file_d: The name of the file
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file_d)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_d);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @d_opened_file: The file descriptor to be closed.
 */
void close_file(int d_opened_file)
{
	int close_file;

	close_file = close(d_opened_file);
	if (close_file == -1)
	{
		d_printf(STDERR_FILENO, "Error: Can't close fd %d\n", d_opened_file);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_source, file_dest, bytes_read, bytes_written;
	char *buffer;
	const char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	buffer = create_buffer(file_from);
	file_source = open(file_from, O_RDONLY);
	bytes_read = read(file_from, buffer, 1024);
	file_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (bytes_read > 0)
	{
		if (file_source == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			free(buffer);
			exit(98);
		}

		bytes_written = write(file_dest, buffer, bytes_read);
		if (file_dest == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			free(buffer);
			exit(98);
		}
		bytes_read = read(file_source, buffer, 1024);
		file_dest = open(file_to, O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(file_source);
	close_file(file_dest);
	return (0);
}
