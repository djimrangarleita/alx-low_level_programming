#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

size_t _strlen(char *str);
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
	size_t len;

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

	len = _strlen(ch);
	if (len < letters)
		letters = len;
	nchar = write(1, ch, letters);

	close(fd);
	free(ch);

	return (nchar);
}

/**
 * _strlen - return the size of the @str
 * @str: string ptr
 * Return: size of str
 */
size_t _strlen(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
		i++;

	return (i);
}
