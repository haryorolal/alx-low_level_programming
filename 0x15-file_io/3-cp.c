#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - funciton to close file
 * @exit_code: first argument
 * @message: second agument
 * @arg: third arg
 * Return: returns
 */
int error_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(2, message, arg);
	return (exit_code);
}
/**
 * main - function that reads a text file and prints it to POSIX
 * @argc: file argument
 * @argv: second file argument
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	ssize_t bytes_read = 1, bytes_written;
	char buffer[BUFFER_SIZE];
	const char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
		exit(error_exit(97, "Usage: cp file_from file_to\n", NULL));

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
		exit(error_exit(98, "Error: Can't read from file %s\n", file_from));

	fd_dest = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_dest == -1)
		exit(error_exit(99, "Error: Can't write to %s\n", file_to));

	while (bytes_read > 0)
	{
		bytes_read = read(fd_source, buffer, BUFFER_SIZE);
		bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
			exit(error_exit(99, "Error: Can't write to %s\n", file_to));
	}

	if (bytes_read == -1)
		exit(error_exit(98, "Error: Can't write to %s\n", file_from));

	if (close(fd_source) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_source);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}

	return (0);
}
