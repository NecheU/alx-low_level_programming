#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - A function that reads a textfile and print
 * it to the POSIX standard output
 * @letters: the number of letter it should read and print
 * @filename: the text file being read
 * Return: 0 if file cannot be open or read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fp;
	ssize_t file_data;
	ssize_t w, r;

	if (filename == NULL)
		return (0);

	file_data = open(filename, O_RDONLY);
	if (file_data == 1)
		return (0);

	fp = malloc(sizeof(char) * letters);
	if (!fp)
		return (0);

	r = read(file_data, fp, letters);
	w = write(STDOUT_FILENO, fp, r);


	free(fp);
	close(file_data);
	return (w);
}
