#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * auth - gbot
 * Return: pointer to the new array
 */

int *array_range(int min, int max)

{

int *array;
int i, value;

value = max - min + 1;
array = malloc(sizeof(int) * value);

if (min > max)
	return (NULL);

if (array == NULL)
	return (NULL);

for (i = 0; min <= max; i++)
	array[i] = min++;

return (array);

}
