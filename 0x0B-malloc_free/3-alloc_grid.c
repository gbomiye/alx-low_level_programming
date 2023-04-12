#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * auth: gbotemi
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **dim;
	int i, j, k, l;

	l = 0;
	if (width <= 0 || height <= 0)
		return (0);

	dim = malloc(height * sizeof(int *));
	if (dim == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(dim + i) = malloc(width * sizeof(int));
		if (*(dim + i) == 0)
		{
			l = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			dim[i][j] = 0;
		}
	}
	if (l == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(dim + k));
		}
		free(dim);
	}
	return (dim);
}
