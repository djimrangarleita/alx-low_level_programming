#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read a text file and output it's content to stdout
 * @filename: name of the file to read
 * @letters: number of chars to be written to stdout
 * Return: number of letters red and printed
 * 	0 if file cannot be opened or red
 * 	0 if @filename is null
 * 	0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	int nchar = 0, tmp = 0;
	char ch;

	fptr = fopen(filename, "r");

	if (!filename || !fptr)
		return (0);

	while (letters > 0 && ch != EOF)
	{
		ch = fgetc(fptr);
		tmp = write(1, &ch, 1);
		if (tmp == 1)
			nchar += tmp;
		else
			return (0);
		letters--;
	}
	fclose(fptr);

	return (nchar);
}
