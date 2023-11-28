#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void read_write_file(char *file_from, char *file_to);
void close_file(int fd, char *buffer);
void printerr(int status, char *filename, char *msg, char *buffer);

/**
 * main - Driver, test the program
 * @argc: count of args
 * @argv: arg vector, list of args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	read_write_file(argv[1], argv[2]);

	return (0);
}

/**
 * read_write_file - read text from @filename and write to buffer
 * @file_from: name of the file to create
 * @file_to: where to write
 */
void read_write_file(char *file_from, char *file_to)
{
	int ffrom, fto, rret, wret;
	char *buffer;

	buffer = malloc(1024 * sizeof(char));
	if (!buffer)
		exit(98);

	ffrom = open(file_from, O_RDONLY);
	fto = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	do {
		rret = read(ffrom, buffer, 1024);
		if (rret < 0)
		{
			printerr(98, file_from, "Can't read from file", buffer);
		}
		if (rret == 0)
			break;

		wret = write(fto, buffer, rret);
		if (wret < 0)
		{
			printerr(99, file_to, "Can't write to", buffer);
		}
	} while (rret >= 1024);
	close_file(ffrom, buffer);
	close_file(fto, buffer);

	free(buffer);
}

/**
 * printerr - print error msg to stderr
 * @status: exit status code
 * @filename: name of the file
 * @msg: the error msg to be printed
 * @buffer: buffer, content
 */
void printerr(int status, char *filename, char *msg, char *buffer)
{

	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, filename);
	free(buffer);
	exit(status);
}

/**
 * close_file - try to close a file
 * @fd: file descriptor
 * @buffer: buffer
 */
void close_file(int fd, char *buffer)
{
	int cval;

	cval = close(fd);
	if (cval < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(buffer);
		exit(100);
	}
}
