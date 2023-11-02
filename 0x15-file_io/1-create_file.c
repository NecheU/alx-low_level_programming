#include "main.h"
#include <stdlib.h>

/**
 * create_file - C funtion that creates a file
 * @filename: the file name
 * @text_content: a NULL terminating string to wriye in the file
 *
 * Return: 1 if successful or -1 ok failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len, a;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT, O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
		return (1);
	len = 0;
	while (text_content[len] != '\0')
		len++;

	a = write(file, text_content, len);
	if (a != len)
		return (-1);
	a = close(file);
	if (a == -1)
		exit(-1);

	return (1);
}
