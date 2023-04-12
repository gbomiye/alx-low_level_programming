#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * gbotemi
 * Return: Pointer to a newly allocated space
 * return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *con;
int i, j;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = malloc(sizeof(char) * (i + j + 1));

	if (con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		con[i] = s2[j];
		i++, j++;
	}
	con[i] = '\0';
	return (con);
}
