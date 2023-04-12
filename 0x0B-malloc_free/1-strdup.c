#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Auth - gbotemi
 * Return:Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer dupl string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, r = 0;
	char *x;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	x = malloc(sizeof(char) * (i + 1));

	if (x == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		x[r] = str[r];

	return (x);
}
