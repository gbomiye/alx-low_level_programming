#include "main.h"

/**
 * append_text_to_file - fn to append my text.
 * @filename: points to name of file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int op = 0;
int wri = 0;
lenght = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (lenght = 0; text_content[len];)
len++;
}
op = open(filename, O_WRONLY | O_APPEND);
wri = write(op, text_content, lenght);
if (op == -1 || wri == -1)
return (-1);
close(op);
return (1);
}
