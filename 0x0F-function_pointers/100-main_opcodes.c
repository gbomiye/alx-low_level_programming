#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: arguments count
 * @argv: argument vector array
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
int value, i;
char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < value; i++)
	{
	if (i == value - 1)
		{
		printf("%.2x\n", arr[i]);
		break;
		}
	printf("%.2x ", arr[i]);
	}
	return (0);
}
