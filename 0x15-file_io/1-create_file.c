#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: points to the name of the file to create.
 * @text_content: points to a string to write to the file.
 *
 * Return: - -1, If the function fails, Otherwise - 1.
 */


int create_file(const char *filename, char *text_content)
{
	int file, writ, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(file, text_content, i);

	if (file == -1 || writ == -1)
		return (-1);

	close(file);

	return (1);
}
