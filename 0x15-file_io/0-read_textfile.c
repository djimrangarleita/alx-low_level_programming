#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and output it's content to stdout
 * @filename: name of the file to read
 * @letters: number of chars to be written to stdout
 * Return: number of letters red and printed
 *	0 if file cannot be opened or red
 *	0 if @filename is null
 *	0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int nchar = 0, tmp = 0, fd;
	char *ch = malloc(letters * sizeof(char));

	fd = open(filename, O_RDONLY);

	if (!ch || !filename || fd < 0)
	{
		close(fd);
		return (0);
	}
	tmp = read(fd, ch, letters);
	if (tmp < 0)
	{
		close(fd);
		return (0);
	}

	nchar = write(STDOUT_FILENO, ch, tmp);

	close(fd);
	free(ch);

	return (nchar);
}
