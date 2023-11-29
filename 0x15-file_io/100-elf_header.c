#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

void printerr(int status, char *msg, char *filename);
void print_elf(Elf64_Ehdr *elfh);
int is_elf(Elf64_Ehdr *elfh, char *filename, int fd);

/**
 * main - read a text file and output it's content to stdout
 * @argc: arg count
 * @argv: list of arguments
 * Return: number of letters red and printed
 *	0 if file cannot be opened or red
 *	0 if @filename is null
 *	0 if write fails or does not write the expected amount of bytes
 */
int main(int argc, char *argv[])
{
	int fd, tmp;
	Elf64_Ehdr elfh;
	char *filename;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: [program] [filename]\n");
		exit(98);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		printerr(98, "Can't open file", filename);
	}

	tmp = read(fd, &elfh, sizeof(Elf64_Ehdr));
	if (tmp != sizeof(Elf64_Ehdr))
	{
		close(fd);
		printerr(98, "Can't read file", filename);
	}
	if (is_elf(&elfh, filename, fd))
	{
		print_elf(&elfh);
	}

	close(fd);

	return (0);
}

/**
 * print_elf - read elf file and display it's content to stdout
 * @elfh: elf header ptr
 */
void print_elf(Elf64_Ehdr *elfh)
{
	printf("Magic:	 ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header.e_ident[i]);
	printf("\nClass:				 ");
	printf("%s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
			"ELF32");
	printf("Data:				   ");
	printf("%s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's
			complement,	  little endian" : "2's complement, big
			endian");
	printf("Version:				   ");
	printf("%u\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:				   ");
	printf("%u\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:			   ");
	printf("%u\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:				   ");
	printf("%u\n", elf_header.e_type);
	printf("Entry point address:		   ");
	printf("%#010x\n", (unsigned int)elf_header.e_entry);
}

/**
 * is_elf - check if a given file is elf file
 * @elfh: struct, elf header
 * @filename: the name of the file
 * @fd: file descriptor
 * Return: 1 if elf file
 */
int is_elf(Elf64_Ehdr *elfh, char *filename, int fd)
{
	if (elfh->e_ident[EI_MAG0] == ELFMAG0 || elfh->e_ident[EI_MAG1] ==
			ELFMAG1 || elfh->e_ident[EI_MAG2] == ELFMAG2 ||
			elfh->e_ident[EI_MAG3] == ELFMAG3)
	{
		return (1);
	}
	else
	{
		close(fd);
		printerr(98, "File is not a valid elf,", filename);
	}

	return (1);
}

/**
 * printerr - print error msg to stderr
 * @status: exit status code
 * @msg: char *, msg to print
 * @filename: the file name
 */
void printerr(int status, char *msg, char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, filename);
	exit(status);
}
