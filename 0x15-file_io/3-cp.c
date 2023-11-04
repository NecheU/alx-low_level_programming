#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - It allocate 1024 bytes fora buffer
 * @file: The name of the file budfer is storimg char for
 *
 * Return: A pointer to the newly allocates buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - It closes the dile descriptor
 * @fd: the file descriptor to be closed
 */
void close_file(int fd *buffer)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(buffer);
		exit(100);
	}
}

/**
 * main - It copies the contents of a file to another file
 * @argc: num of arguments given to the function
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 if successful
 *
 * Information:
 * if the argc is not correft, exit code 97
 * if the src_file does not exist or can't he read, exit code 98
 * if dest_file cannot be created or written to, exit code 99
 * if scr_file or dest_file cannot be closed, exit code 100
 */

int main(int argc, char *argv[])
{
	int src_file, dest_file, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	src_file = open(argv[1], O_RDONLY);
	rd = read(src_file, buffer, 1024);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src_file == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(dest_file, buffer, rd);
		if (dest_file == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(src_file, buffer, 1024);
		dest_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buffer);
	close(src_file);
	close(dest_file);

	return (0);
}
