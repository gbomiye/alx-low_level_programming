#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int c, i, j;

	c = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			c = 0;
		else if (c == 0)
		{
			c = 1;
			j++;
		}
	}

	return (j);


/**
 * strtow -  splits a string into words
 * @str: array of strings
 *
 * Return: return NULL ,If your function fails
 */

char **strtow(char *str)
{
char **m, *tmp;
int i, k = 0, len = 0, r, c = 0, start, end;

while (*(str + len))
len++;
r = count_word(str);
	if (r == 0)
	return (NULL);
	m = (char **) malloc(sizeof(char *) * (r + 1));
	if (m == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	{
	if (str[i] == ' ' || str[i] == '\0')
	{
	if (c)
	{
	end = i;
	tmp = (char *) malloc(sizeof(char) * (c + 1));
	if (tmp == NULL)
	return (NULL);
		while (start < end)
		*tmp++ = str[start++];
		*tmp = '\0';
		m[k] = tmp - c;
		k++;
		c = 0;
	}
	}
	else if (c++ == 0)
	start = i;
	}
	[k] = NULL;
	return (m);
}
