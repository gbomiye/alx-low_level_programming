#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * auth - gt
 * Description: If separator is NULL, not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list num;
char *var;
unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
	var = va_arg(num, char *);

		if (var == NULL)
			printf("(nil)");
		else
			printf("%s", var);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

va_end(num);
}
