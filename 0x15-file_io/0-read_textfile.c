#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: file argument
 * @letters: letters
 * Return: returns actual numbers of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open;
	ssize_t store_read_values = 0;
	char store_written;
	char *buff;

	if (filename == NULL)
		return (0);

	fd_open = open(filename, O_RDWR);
	if (fd_open == -1)
	{
		return (0);
	}

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd_open);
		return (0);
	}

	store_read_values = read(fd_open, buff, letters);
	if (store_read_values == -1)
	{
		close(fd_open);
		free(buff);
		return (0);
	}

	store_written = write(STDOUT_FILENO, buff, store_read_values);
	if (store_written == -1)
	{
		close(fd_open);
		free(buff);
		return (0);
	}
	close(fd_open);
	free(buff);
	return (store_written);
}
