#include "main.h"
#include <stdlib.h>

/**
 * calloc - function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer
 * @nmemb: The num of input elements
 * @size: The byte size of each array element.
 * auth: gbot
 * Return: NULL, If nmemb or size is 0, or the function fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
char *mal; 
char *all;
unsigned int i;

if (nmemb == 0 || size == 0)
	return (NULL);

mal = malloc(size * nmemb);

if (mal == NULL)
	return (NULL);

all = mal;
for (i = 0; i < (size * nmemb); i++)
	all[i] = '\0';

return (mal);

}
