#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that adds positive numbers
 *@argc: argument count
 *@argv: argumetn array
 *auth - gbotemi
 *Returns: If no number is passed to the program,
 *print 0, followed by a new line
 *If the number contains symbols not digits print Error and return 1
 *
 */

int main(int argc, char *argv[])
{
	int i, j, lan, add;
	char *var;

	if (argc < 2)
	printf("0\n");
	else
	{
		add = 0;
		for (i = 1; i < argc; i++)
		{
			var = argv[i];
			lan = strlen(var);

			for (j = 0; j < lan; j++)
			{
				if (isdigit(*(var + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[i]);
		}

		printf("%d\n", add);
	}
	return (0);
}
