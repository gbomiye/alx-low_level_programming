#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - displays the multiplication of two counts
 *@argc: argument count
 *@argv: argument vector
 *auth - gbotemi
 *Return: if not two arguments
 *print Error followed by a new line and return 1,
 *else always 0
 */

int main(int argc, char *argv[])

{
	int i,j;

	if (argc <= 2)
	{
	printf("Error/n");
	
	return (1);
	}

	else 
	{
		j = 1;
		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}


	return (0);
	}
