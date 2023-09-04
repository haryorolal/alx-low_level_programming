#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: file argument
 * @letters: letters
 * Return: returns actual numbers of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open;
	int store_read_values = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		perror("malloc");
		return (0);
	}

	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
	{
		perror("open");
		return (0);
	}

	store_read_values = read(fd_open, buff, letters);
	if (store_read_values == -1)
	{
		perror("read");
		close(fd_open);
		free(buff);
		return (0);
	}

	write(STDOUT_FILENO, buff, store_read_values);
	close(fd_open);
	free(buff);
	return (store_read_values);
}
