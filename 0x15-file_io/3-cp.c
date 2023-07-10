#include <stdlib.h>
#include "main.h"
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - fn that allocates 1024 bytes for a buffer.
 * @file: The name of the file
 * Return: points to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
char *butterr;

butterr = malloc(sizeof(char) * 1024);
if (butterr == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (butterr);
}

/**
 * close_file - Close file desc.
 * @fd: The file desc to close.
 */
void close_file(int fd)
{
int cl;

cl = close(fd);
if (cl == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close  %d\n", fd);
exit(100);
}
}

/**
 * main - fn to copy the contents of one file to another.
 * @argc: argument count
 * @argv: argument vvector.
 *at gbot
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int in;
int out;
int r;
int w;
char *butterr;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Use: cp file_from file_to\n");
exit(97);
}

butterr = create_buffer(argv[2]);
in = open(argv[1], O_RDONLY);
r = read(in, butterr, 1024);
out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (in == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(butterr);
exit(98);
}
w = write(out, butterr, r);
if (out == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(butterr);
exit(99);
}

r = read(in, butterr, 1024);
out = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(butterr);
close_file(in);
close_file(out);
return (0);
}
