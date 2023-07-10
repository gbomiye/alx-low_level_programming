#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- fn that reads textfile to give STDOUT.
 * @filename: text to read
 * @letters: len of letters 2 read
 * Return: actual number of bytes read and printed
 *        but 0 when fn fails or name is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t food;
ssize_t ret;
ssize_t p;

food = open(filename, O_RDONLY);
if (food == -1)
return (0);
b = malloc(sizeof(char) * letters);
p = read(food, b, letters);
ret = write(STDOUT_FILENO, b, p);
free(b);
close(food);
return (ret);
}
