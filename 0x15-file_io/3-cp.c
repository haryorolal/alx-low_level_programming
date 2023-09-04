#include "main.h"
/**
 * close_file - funciton to close file
 * @location: first agument
 */
void close_file(int location)
{
	if (close(location) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", location);
		exit(100);
	}
}
/**
 * cp - function that reads a text file and prints it to POSIX
 * @file_from: file argument
 * @file_to: second file argument
 * Return: returns 0 on success
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_source, fd_dest;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (file_from == NULL || file_to == NULL)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_dest = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	bytes_read = read(fd_source, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_from);
		exit(98);
	}
	close_file(fd_source);
	close_file(fd_dest);
	return (0);
}
