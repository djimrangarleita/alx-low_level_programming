#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

size_t _strlen(char *str);
/**
 * create_file - create a new file with @text_content if possible
 * @filename: name of the file to create
 * @text_content: str to write to filename
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wret;

	if (!filename)
		return (-1);
	len = _strlen(text_content);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	wret = write(fd, text_content, len);
	if (wret < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen - determine the len of @str
 * @str: ptr to str
 * Return: size of the string
 */
size_t _strlen(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
		i++;

	return (i);
}
