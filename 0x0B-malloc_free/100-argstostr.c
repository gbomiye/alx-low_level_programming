#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input
 * @av: inputs
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)

{
	int i, a, b, c = 0;
	char *con;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++)
			c++;
	}
	c += ac;

	con = malloc(sizeof(char) * c + 1);
	if (con == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (a = 0; av[i][a]; a++)
	{
		con[b] = av[i][a];
		b++;
	}
	if (str[b] == '\0')
	{
		str[b++] = '\n';
	}
	}
	return (con);
}
