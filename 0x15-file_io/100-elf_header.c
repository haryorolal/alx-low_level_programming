#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
 * print_elf_info - prints nums on elf header.
 * @elf_header: elf header input
 * Return: 0
 */
void print_elf_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	printf("Class:%s\n", elf_header->e_ident[EI_CLASS]
			== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:%s\n", elf_header->e_ident[EI_DATA]
			== ELFDATA2LSB ? "2's complement, little endian"
			: "2's complement, big endian");
	printf("Version:%d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:%s\n", elf_header->e_ident[EI_OSABI]
			== ELFOSABI_SYSV ? "UNIX System V" : "Other");
	printf("ABI Version:%d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:%s\n", elf_header->e_type
			== ET_REL ? "REL (Relocatable file)"
			: "EXEC (Executable file)");
	printf("Entry point address: 0x%lx\n", (unsigned long)elf_header->e_entry);
}
/**
 * main - entry
 * @argc: num of arguments
 * @argv: an array of pointer to argument
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	const char *elf_filename;
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	elf_filename = argv[1];
	fd = open(elf_filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", elf_filename);
		exit(98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n",
				elf_filename);
		close(fd);
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file: %s\n", elf_filename);
		close(fd);
		exit(98);
	}
	print_elf_info(&elf_header);
	close(fd);
	return (0);
}
