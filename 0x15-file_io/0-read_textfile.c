#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual bytes read and print 0 if fail or filename NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *byte;
	ssize_t red;
	ssize_t writ;
	ssize_t text;

	red = open(filename, O_RDONLY);
	if (red == -1)
		return (0);
	byte = malloc(sizeof(char) * letters);
	text = read(red, byte, letters);
	writ = write(STDOUT_FILENO, byte, text);

	free(byte);
	close(red);
	return (writ);
}
