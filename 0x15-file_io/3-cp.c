#include "main.h"
#include <stdlib.h>
#include <stdio.h>


char *create_buffer(char *file);
void close_file(int fil);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file to buffer
 *
 * Return: A pointer to the allocated new  buffer.
 */

char *create_buffer(char *file)
{

char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fil: The file to be closed.
 */

void close_file(int fil)
{
	int c;

	c = close(fil);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fil);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 * @argc: argument count
 * @argv: Argument vector
 *
 * Return: 0 for success.
 *
 * Desc: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from;
	int goi;
	int red;
	int writ;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	red = read(from, buffer, 1024);
	goi = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || red == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writ = write(goi, buffer, red);
		if (goi == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		red = read(from, buffer, 1024);
		goi = open(argv[2], O_WRONLY | O_APPEND);

	} while (red > 0);

	free(buffer);
	close_file(from);
	close_file(goi);

	return (0);
}
