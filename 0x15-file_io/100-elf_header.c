#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * display_error - prints errors
 * @message: parameter member
 * Return: 0
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header_info - prints nums on elf header.
 * @elf_header: elf header input
 * Return: 0
 */
void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	printf("Magic: %02x %02x %02x %02x\n",
			elf_header->e_ident[EI_MAG0],
			elf_header->e_ident[EI_MAG1],
			elf_header->e_ident[EI_MAG2],
			elf_header->e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header->e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header->e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header->e_type);
	printf("Entry point address: %lx\n", elf_header->e_entry);

}
/**
 * main - entry
 * @argc: num of arguments
 * @argv: an array of pointer to argument
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: failed to open the file");
	}
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{

		dprintf(STDERR_FILENO, "Failed to read ELF header");
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Not an ELF file");
	}

	display_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
